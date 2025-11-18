%%Task 1
A = [3, 5, 7; 2, 4, 6];
B = [6, 2, 1; 5, 3 ,2];

%a)
C1 = A + B;
C2 = A - B;

disp('sum = '); disp(C1);
disp('diff = '); disp(C2);

%b)
AT = A';
BT = B';

disp('transpose of A = '); disp(AT);
disp('transpose of B = '); disp(BT);

%c)
C = A * BT;

disp('C = '); disp(C);

%%Taks 2

X = [1, 3, 2; 4, 0, 1; 2, 5, 3];
Y = [2, 1, 4; 0, 3, 2; 1, 2, 1];

%a)
Z = X * Y;

disp('Z = '); disp(Z);

%b)
XT = X';
YT = Y';

disp('transpose of X = '); disp(XT);
disp('transpose of Y = '); disp(YT);

%c)
W = XT * YT;
disp('W = '); disp(W);

%d)
ZT = Z';

if (W == ZT)
    disp('W is equal to ZT');
else
    disp('W is  not equal to ZT');
end


%%Task 3

D = [2,1;3,4];
E = [1,3;2,0];

F = (D * E);
G = (E * D);

disp('A x B = '); disp(F);
disp('B x A = '); disp(G);

disp('AxB not equal BxA')