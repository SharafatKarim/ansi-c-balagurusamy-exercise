#include <stdio.h>
#include <string.h>
#include <ctype.h>

void intro(void)
{
	printf("Name: Sharafat\n");
	printf("Id  : 2102024\n");
}

int main()
{
	char month[15];
	printf("Enter the name of month: ");
	scanf("%s", month);

	int i, days;
	for (i = 0; month[i]; i++)
		month[i] = tolower(month[i]);

	switch (strcmp(month, "january"))
	{
	case 0:
		days = 31;
		break;
	default:
		switch (strcmp(month, "february"))
		{
		case 0:
			days = 28;
			break;
		default:

			switch (strcmp(month, "march"))
			{
			case 0:
				days = 31;
				break;
			default:
				switch (strcmp(month, "april"))
				{
				case 0:
					days = 30;
					break;
				default:
					switch (strcmp(month, "may"))
					{
					case 0:
						days = 31;
						break;
					default:
						switch (strcmp(month, "june"))
						{
						case 0:
							days = 30;
							break;
						default:
							switch (strcmp(month, "july"))
							{
							case 0:
								days = 31;
								break;
							default:
								switch (strcmp(month, "august"))
								{
								case 0:
									days = 31;
									break;
								default:
									switch (strcmp(month, "september"))
									{
									case 0:
										days = 30;
										break;
									default:
										switch (strcmp(month, "october"))
										{
										case 0:
											days = 31;
											break;
										default:
											switch (strcmp(month, "november"))
											{
											case 0:
												days = 30;
												break;
											default:
												switch (strcmp(month, "december"))
												{
												case 0:
													days = 31;
													break;
												default:
													days = 0;
												}
												break;
											}
											break;
										}
										break;
									}
									break;
								}
								break;
							}
							break;
						}
						break;
					}
					break;
				}
				break;
			}
			break;
		}
		break;
	}

	printf("%d", days);
	return 0;
}
