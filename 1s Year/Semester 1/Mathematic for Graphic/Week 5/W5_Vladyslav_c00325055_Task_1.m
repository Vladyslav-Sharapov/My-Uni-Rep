%%Task 1
a = [0,0,0];
b = [1,2,0];
c = [0,3,4];

ab = a - b;
bc = b - c;

n = cross(ab, bc);

n_unit = n/norm(n);
C = (a+b+c)/3;

figure;
hold on;
grid on;
axis equal;

fill3([a(1),b(1),c(1)],[a(2),b(2),c(2)],[a(3),b(3),c(3)],'c');

plot3(0,0,0, a(1), a(2), a(3), 'ro', 'MarkerSize',8);
plot3(0,0,0, b(1), b(2), b(3), 'go', 'MarkerSize',8);
plot3(0,0,0 ,c(1), c(2), c(3), 'bo', 'MarkerSize',8);

text(a(1), a(2), a(3), 'a', 'Color', 'r', 'FontWeight', 'bold')
text(b(1), b(2), b(3), 'b', 'Color', 'g', 'FontWeight', 'bold')
text(c(1), c(2), c(3), 'c', 'Color', 'b', 'FontWeight', 'bold')

quiver3(C(1),C(2),C(3),n_unit(1),n_unit(2),n_unit(3),2,'k','LineWidth',2);

area = 0.5*n;
