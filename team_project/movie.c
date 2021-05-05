int selectMenu(){
        int menu;
        printf("\n*** 영화 정보 관리 프로그램 ***\n");
        printf("1. 조회\n");
        printf("2. 추가\n");
        printf("3. 수정\n");
        printf("4. 삭제\n");
        printf("0. 종료\n");
        printf("=> 원하는 메뉴는? ");
        scanf("%d", &menu);

        return menu;
}
