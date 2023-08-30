#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	    int sum = 0;
	        int num;

		    if (argc == 1) {
			            printf("0\n");
				            return 0;
					        }

		        if (argc == 2) {
				        num = atoi(argv[1]);

					        if (num == 0 && argv[1][0] != '0') {
							            printf("Error\n");
								                return 1;
										        }

						        sum = num;
							    } else if (argc > 2) {
								            num = atoi(argv[1]);

									            if (num == 0 && argv[1][0] != '0') {
											                printf("Error\n");
													            return 1;
														            }

										            sum = num;

											            num = atoi(argv[2]);

												            if (num == 0 && argv[2][0] != '0') {
														                printf("Error\n");
																            return 1;
																	            }

													            sum += num;
														        }

			    printf("%d\n", sum);

			        return 0;
}

