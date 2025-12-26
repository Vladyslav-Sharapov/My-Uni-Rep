%%Task 1
A = [2;1];
B = [5;1];
C = [6;4];
D = [3;4];

Ry = [-1 0; 0 1];

Ar = Ry * A;
Br = Ry * B;
Cr = Ry * C;
Dr = Ry * D;

figure;
hold on;
grid on;
axis equal;
xlabel('X'); 
ylabel('Y');

x = [A(1) B(1) C(1) D(1) A(1)];
yc = [A(2) B(2) C(2) D(2) A(2)];
plot(x,yc,'r','LineWidth',2);

text(A(1), A(2), 'A', 'FontSize', 15);
text(B(1), B(2), 'B', 'FontSize', 15);
text(C(1), C(2), 'C', 'FontSize', 15);
text(D(1), D(2), 'D', 'FontSize', 15);

xz = [Ar(1) Br(1) Cr(1) Dr(1) Ar(1)];
yz = [Ar(2) Br(2) Cr(2) Dr(2) Ar(2)];
plot(xz,yz,'b','LineWidth',2);

text(Ar(1), Ar(2), 'A', 'FontSize', 15);
text(Br(1), Br(2), 'B', 'FontSize', 15);
text(Cr(1), Cr(2), 'C', 'FontSize', 15);
text(Dr(1), Dr(2), 'D', 'FontSize', 15);

%%Task 2
P = [2;1];
Q = [5;1];
R = [3;4];

Rt = [cos(pi/2) -sin(pi/2); sin(pi/2) cos(pi/2)];

Pz = Rt * P;
Qz = Rt * Q;
Rz = Rt * R;

figure;
hold on;
grid on;
axis equal;
xlabel('X'); 
ylabel('Y');

x = [P(1) Q(1) R(1) P(1)];
y = [P(2) Q(2) R(2) P(2)];

plot(x,y,'r','LineWidth',2);

text(Pz(1), Pz(2), 'P', 'FontSize', 15);
text(Qz(1), Qz(2), 'Q', 'FontSize', 15);
text(Rz(1), Rz(2), 'R', 'FontSize', 15);

xc = [Pz(1) Qz(1) Rz(1) Pz(1)];
yc = [Pz(2) Qz(2) Rz(2) Pz(2)];

plot(xc,yc,'b','LineWidth',2);

text(P(1), P(2), 'P', 'FontSize', 15);
text(Q(1), Q(2), 'Q', 'FontSize', 15);
text(R(1), R(2), 'R', 'FontSize', 15);
