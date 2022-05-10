#include <stdio.h>
#include <math.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n=1;
    int r_area, t_area, r_w, r_l, t_w, t_l;
    float ans;
    printf("Enter the width and length of the room respectively : ");
    scanf("%d %d", &r_w, &r_l);
    printf("Enter the width and length of the Tatami respectively : ");
    scanf("%d %d", &t_w, &t_l);

    r_area = r_w*r_l;
    t_area = t_l*t_w;
    if(t_w>r_w||t_w>r_l||t_l>r_w||t_l>r_l){
        printf("Cant fit ");
        return 0;
    }  
    else printf("No. of Tatami mats :: %.0f pieces\n", floor(r_area/t_area));
    printf("The rest area is %.0lf square meters", r_area - t_area*floor(r_area/t_area));
    return 0;
}