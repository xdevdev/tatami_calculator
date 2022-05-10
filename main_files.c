#include <stdio.h>
#include <math.h>
#include <string.h>

int r_area, t_area;
int r_w, r_l, t_w, t_l;
int x=1;
void menu(void);

int tatami_num(int r_w, int r_l, int t_w, int t_l){
    r_area = r_w*r_l;
    t_area = t_l*t_w;

    if(t_w>r_w||t_w>r_l||t_l>r_w||t_l>r_l){
        printf("Cant fit");
        return 0;
    }
    else return(floor(r_area/t_area));
}

float rest_area(int r_w, int r_l, int t_w, int t_l){
    return (r_area - t_area*floor(r_area/t_area));
}

int twobyn(int n){
    if (n <= 2)
      return n;
    return twobyn(n - 1) + twobyn(n - 2);
}

int threebyn(int n){
    int A[n + 1], B[n + 1];
    A[0] = 1, A[1] = 0, B[0] = 0, B[1] = 1;
    for (int i = 2; i <= n; i++) {
        A[i] = A[i - 2] + 2 * B[i - 1];
        B[i] = A[i - 1] + B[i - 2];
    }
    return A[n];
}

int main(){
    menu();
    if(r_w == 2){
        printf("No. of Solution : %d\n", twobyn(r_l));
    }
    if(r_w == 3){
        printf("No. of Solution : %d\n", threebyn(r_l));
    }
    printf("The number of No. of Tatami : %d\n", tatami_num(r_w,r_l,t_w,t_l));
    printf("The number of Rest area in the room : %.2f square meters\n", rest_area(r_w,r_l,t_w,t_l));
    return 0;
}

void menu(void){
    int choice;
    printf("------- Welcome to the tatami Calculator -------\n");
    printf("Enter the room width (2 or 3) : ");
    scanf("%d", &r_w);
    printf("Enter the room length : ");
    scanf("%d", &r_l);
    printf("**--**--**--**--**\nEnter number\n1: Tatami Original Size\n2: Custom Size\n**--**--**--**--**\n");
    scanf("%d", &choice);
    if(choice == 1){
        t_w = 1;
        t_l = 2;
    }
    if(choice == 2){
        printf("Enter the Tatami width : ");
        scanf("%d", &t_w);
        printf("Enter the Tatami width : ");
        scanf("%d", &t_l);
    }
}