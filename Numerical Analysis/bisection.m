clc
clear all

%Ingridents (You can also input them) 
f = @(x) 2^x-5*x+2;
a=0;
b=1;
n=30;
tol=10^-4;   

if f(a)*f(b)<0
    for i=1:n
        c=(a+b)/2;
        fprintf("p%d = %.4f\n",i,c)
        if abs(c-b)<tol || abs(c-a)<tol
            break
        end
        if f(a)*f(c)<0
            b=c;

        elseif f(a)*f(b)<0
            a=c;
    
        end
    end
else
    disp("No root between given brackets")
end