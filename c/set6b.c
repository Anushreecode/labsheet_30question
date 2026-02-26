struct Students
{
    int rollno;
    char name[18];
    int total;
};

int main()
{
    struct Students s1 = {1, "anushree", 90};

    printf("Roll Number : %d\n", s1.rollno);
    printf("First Name  : %s\n", s1.name);
    printf("total   : %d\n", s1.total);

    return 0;
}
