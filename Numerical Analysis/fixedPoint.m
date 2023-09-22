clc
clear all

%Ingridents (You can also input them) 
g=input('Enter your function : ');
xO=input('Enter initial guess : ');
e=input('Enter tolerance : ');
n=input('Enter no of iterations : ');

for i=1:n
   x1=g(xO);
   fprintf('x%d = %.4f\n' ,i,x1)
   if abs(x1-xO)<e
       break
   end
   xO=x1;
end
