u = [2, 7, 1];
v = [3, 4, 6];

q = 5 * u;
r = u + v;
s = u .* v;

norm(u)

x=0; y=0; z=0;

figure;
quiver3(x,y,z,u(1),u(2),u(3));
hold on

quiver3(x,y,z,v(1),v(2),v(3))
hold on

quiver3(x,y,z,q(1),q(2),q(3))
hold on

quiver3(x,y,z,r(1),r(2),r(3))
hold on

quiver3(x,y,z,s(1),s(2),s(3))
hold on