#include<stdio.h>

void printPoints(double x1, double y1, double x2, double y2)
{
    printf("The points is (%lf,%lf),(%lf,%lf)\n",x1,y1,x2,y2);
}

void printError()
{
    printf("The line is not in the rectangle window.\n");
}

double max1(double a, double b)
{
    if(a<=0&&b<=0){
        return 0;
    }else if(a>=0&&a>=b){
        return a;
    }else if(b>=0&&b>=a){
        return b;
    }
}

double min1(double a, double b)
{
    if(a>=1&&b>=1){
        return 0;
        printf("+a\n");
    }else if(a<=1&&a<=b){
        return a;
        printf("+b\n");
    }else if(b<=1&&b<=a){
        return b;
        printf("+c\n");
    }
}

int main()
{
    double xLeft,xRight,yBottom,yTop,x1,x2,y1,y2,deltaX,deltaY;
    double p1,p2,p3,p4,q1,q2,q3,q4,u1,u2,u3,u4,umax,umin,xPoint1,xPoint2,yPoint1,yPoint2;
    scanf("%lf%lf%lf%lf", &xLeft, &xRight, &yBottom, &yTop);
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    deltaX=x2-x1;
    deltaY=y2-y1;

    p1=-deltaX;
    p2=deltaX;
    p3=-deltaY;
    p4=deltaY;

    q1=x1-xLeft;
    q2=xRight-x1;
    q3=y1-yBottom;
    q4=yTop-y1;

    if(p1!=0&&p2!=0&&p3!=0&&p4!=0){
        u1=q1/p1;
        u2=q2/p2;
        u3=q3/p3;
        u4=q4/p4;

        if(p1>0&&p2>0){
            umax=max1(u3,u4);
            umin=min1(u1,u2);
        }
        if(p1>0&&p3>0){
            umax=max1(u2,u4);
            umin=min1(u1,u3);
        }
        if(p1>0&&p4>0){
            umax=max1(u2,u3);
            umin=min1(u1,u4);
        }
        if(p2>0&&p3>0){
            umax=max1(u1,u4);
            umin=min1(u2,u3);
        }
        if(p2>0&&p4>0){
            umax=max1(u1,u3);
            umin=min1(u2,u4);
        }
        if(p3>0&&p4>0){
            umax=max1(u1,u2);
            umin=min1(u3,u4);
        }
        if(umax<umin){

            xPoint1=x1+umax*(x2-x1);
            yPoint1=y1+umax*(y2-y1);
            xPoint2=x1+umin*(x2-x1);
            yPoint2=y1+umin*(y2-y1);

            printPoints(xPoint1,yPoint1,xPoint2,yPoint2);
        }else{
            printError();
        }
    }


}
