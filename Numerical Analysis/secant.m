clc 
clear all

x0=input('Enter initial guess x0 : ');
x1=input('Enter initial guess x1 : ');

f=@(x) x-cos(x);
tol=10^-2;


if f(x1) ==f(x0)
    fprintf("Secant method not applicable");
    return;
end

x2=x1 -((x1-x0) /f(x1)-f(x0))*f(x1);
err=abs(x2-x1);
itr=1;

while err>tol
x0=x1;
x1=x2;
x2 = x1 - ( (x1-x0)/( f(x1)-f(x0) ) ) * f(x1);
err=abs(x2-x1);
itr=itr+1;
end

fprintf("Root is = %f and no of iterations are %d",x2,itr)