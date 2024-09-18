#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
	int stack[100], i, size, ch, top = -1;
	printf("Enter the size of stack: ");
	scanf("%d", &size);
	while (1)
	{
		system("cls");
		printf("\n\t*MENU*\n");
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. POSITION\n");
		printf("4. DISPLAY\n");
		printf("5. Is Empty\n");
		printf("6. Is Full\n");
		printf("7. EXIT\n");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
		{
			if (top < size-1)
			{
				top++;
				printf("Enter the element to Push: ");
				scanf("%d", &stack[top]);
				printf("\nElement Pushed successfully.\n");
			}
			else
				printf("\nStack is Overflow!\n");
			getch();
			break;
		}
		case 2:
		{
			if (top > -1)
			{
				printf("Popped element: %d\n", stack[top]);
				top--;
				printf("\nElement popped successfully!\n");
			}
			else
				printf("\nStack is underflow!\n");
			getch();
			break;
		}
		case 3:
		{
			if (top == -1)
				printf("\nStack is empty!\n");
			else
			{
				printf("\nValue of Top is %d.", top + 1);
			}
			getch();
			break;
		}
		case 4:
		{
			if (top == -1)
				printf("\nStack is empty!");
			else
			{
				printf("\nStack elements: ");
				for (i = top; i >= 0; i--)
					printf("%d ", stack[i]);
			}
			getch();
			break;
		}
		case 5:
		{
			if (top < size-1)
				printf("\nStack is empty.");
			else
				printf("\nStack is not empty.");
			getch();
			break;
		}
		case 6:
		{
			if (top == size-1)
				printf("\nStack is full.");
			else
				printf("\nStack is not full.");
			getch();
			break;
		}
		case 7:
		{
			printf("\nExiting...\n");
			getch();
			exit(0);
			break;
		}
		default:
		{
			printf("\n\n\n\nPlz choose valid option.");
			getch();
			break;
		}
		}
	}
	return 0;
}
