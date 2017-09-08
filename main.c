#include <stdio.h>
#include <stdlib.h>


int main() {

    while ("true") {
//tao menu lap vinh vien
        int a;
        printf("vui long nhap so a: \n");
        scanf("%d", &a);
    // tao bien a va nhap du lieu cho bien a tu ban phim
        int b;
        printf("vui long nhap so b: \n");
        scanf("%d", &b);
    //tao bien b va nhap du lieu cho bien b tu ban phim
        printf("1: thuc hien phep tinh cong\n");
        printf("2: thuc hien phap tinh tru\n");
        printf("3: thuc hien phep tinh nhan\n");
        printf("4: thuc hien phep tinh chia\n");
        printf("5: thoat \n");
    // hien thi menu ra man hinh
    int c;
        printf("Vui long lua cho: \n", &c);
        scanf("%d", &c);
    // toa bien c cho lua chon menu, va nhap du lieu tu ban phim
    switch (c) {
    // khoi tao chuc nang cho lua chon
        case 1:
            printf("ket qua la: %i cong %i = %i\n", a, b, a + b);
            break;
        // tao thao tac cho lua chon 1
        case 2:
            printf("ket qua la: %i tru %i = %i\n", a, b, a - b);
            break;
        // tao thao tac cho lua chon 2
        case 3:
            printf("ket qua la: %i nhan %i = %i\n", a, b, a*b);
            break;
         // tao thao tac cho lua chon 3
        case 4:
            if (b==0){
            // tao dieu kien cho b khi = 0
                printf("phep tinh khong the thuc hien\n");
            //hien thi ra man hinh thong bao voi dieu kien tuong ung
            }
            else{
                printf("ket qua la: %i chia %i = %i\n", a, b, a / b);
            //tao thao tac cho so lieu nhap vao khac voi dieu kien tren
            }
            break;
        case 5:
                printf("cam on ban da su dung ung dung cua chung toi\n");
        // tao thao tac cho lua chon 3
        default:
            printf("vui long chon lai\n");
            break;
        // tao dieu kien cho truong hop chon danh muc ngoai menu
    }
    }

    return 0;
}
