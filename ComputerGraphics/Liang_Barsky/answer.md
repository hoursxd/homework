# 第一步：
线段两端点：（x1,y1）, （x2,y2）
代入（-1，7）， （11，1）
窗口边界：xleft, xright, ybottom, ytop
xleft=1, xright=9, ybottom=2, ytop=8

# 第二步：
△x =x2-x1= 12
△y =y2-y1= -6
p1=-△x= -12
p2=△x= 12
p3=-△y= 6
p4=△y= -6

q1=x1-xleft= -2
q2=xright-x1= 10
q3=y1-ybottom= 5 
q4=ytop-y1= 1

p1, p2, p3, p4均不为0，所以不平行xy轴
uk=qk/pk
u1=-2/-12=1/6
u2=10/12=5/6
u3=5/6
u4=1/-6=-1/6
求最大u：
umax=max(0, u1, u4 ) , pk<0
umax=max(0, 1/6, -1/6 )=u1=1/6
求最小u：
umin=min(u2, u3, 1 ) , pk>0
umin=min(5/6, 5/6, 1 )=u2=u3=5/6

# 第三步：
umax<umin,则线段在矩形窗口内
当u=umax时，
x=x1+umax * ( x2-x1 )=-1+1/6*(11-(-1))=1
y=y1+umax * ( y2-y1 )=7+1/6*(1-7)=6
一个点为（1，6）
当u=umin时，
x=x1+umin * ( x2-x1 )= -1+5/6*(11-(-1))=9
y=y1+umin * ( y2-y1 )= 7+5/6*(1-7)=2
另一个点为（9，2）
所以裁剪后的端点为（1，6），（9，2）
