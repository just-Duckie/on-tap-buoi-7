#include <stdio.h>
#include <math.h>

int kiem_tra_so_chinh_phuong (int n) {
  if (n < 1) {
    return 0;
  }
  double hi = sqrt(n);
  return (hi * hi == n);
}

int main() {
  int b;
  printf("Nhap vao 1 so: ");
  scanf("%d", &b);

  if (kiem_tra_so_chinh_phuong (b)) {
    printf("%d la so chinh phuong \n", b);
  } else {
    printf("%d khong la so chinh phuong \n", b);
  }

  return 0;
}
