#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "stdlib.h"

int main() {
    char ten[15], phone[11], namsinh[10];
    //tao bien
    printf("1: them moi sinh vien\n");
    printf("2: hien thi danh sach sinh vien\n");
    printf("3: sua sinh vien\n");
    printf("4: xoa sinh vien\n");
    printf("5: thoat\n");
    //hien thi menu
    int a;
    printf("vui long nhap lua chon: ");
    scanf("%d", &a);
    //tao bien cho lua chon
    switch (a) {
        //tao dieu kien khi lua chon bien a
        case 1:

            while ("true") {
                //tao vong lap cho lua chon
                printf("vui long nhap ten ban: ");
                scanf("%s", &ten);
                //quet du lieu da nhap tu ban phim
                if (strlen(ten) <= 3) {
                    // strlen () dung de dp chieu dai cua chuoi da nhap
                    printf("ten qua ngan, vui long nhap lai\n");
                    //tao dieu kien 1
                } else if (strlen(ten) >= 15) {
                    printf("ten qua dai, vui long nhap lai\n");
                    // tao dieu kien 2 khac dieu kien 1
                } else {
                    //tao truong hop xay ra tiep theo khi thoa man dieu kien 1 va 2
                    printf("vui long nhap ngay sinh cua ban:xx/xx/xxxx\n");
                    scanf("%d", &namsinh);
                    printf("vui long nhap so dien thoai cua ban: ");
                    scanf("%d", &phone);
                    printf("ban da them ten thanh cong\n");
                }
                FILE *myFile = fopen("sinhvien.txt", "w");
                fputs(ten, myFile);
                fputs(namsinh, myFile);
                fputs(phone, myFile);
                fclose(myFile);
            }

        case 2:
            printf("danh sach sinh vien la:");
            FILE *myFile;
            myFile = fopen("sinhvien.txt", "r");
            char buffer[100];
            while (fgets(buffer, 100, myFile)) { // đọc nội dung trong file cho đến khi hết dữ liệu.
                printf("%s", buffer);
            }
            fclose(myFile);
            break;
        case 3:
            while ("true") {
                //tao vong lap
                printf("1: sua ten\n");
                printf("2: sua nam sinh\n");
                printf("3: sua so dien thoai\n");
                int b;
                printf("vui long chon thong tin can sua: \n");
                scanf("%d", &b);
                //tao bien b de nhap lua chon
                switch (b) {
                    //tao dieu kien cho b
                    case 1:
                        printf("ban da chon sua ten\n");
                        break;
                    case 2:
                        printf("ban da chon sua nam sinh\n");
                        break;
                    case 3:
                        printf("ban da chon sua so dien thoai\n");
                        break;
                    default:
                        printf("vui long chon lai\n");
                }
                continue;
                //tao cong lap tiep dien
            }
            break;
        case 4:
            printf("ban da chon xoa sinh vien");
            break;
        case 5:
            printf("cam on ban da su dung ung dung cua chung toi\n");
    }

    return 0;
}

