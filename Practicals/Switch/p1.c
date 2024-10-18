#include <stdio.h>

int main() {
    int level = 1;

    switch (level) {
        case 1:
            switch (level) {
                case 1:
                    switch (level) {
                        case 1:
                            switch (level) {
                                case 1:
                                    switch (level) {
                                        case 1:
                                            switch (level) {
                                                case 1:
                                                    switch (level) {
                                                        case 1:
                                                            switch (level) {
                                                                case 1:
                                                                    switch (level) {
                                                                        case 1:
                                                                            printf("Reached 10th nested switch.\n");
                                                                            break;
                                                                        default:
                                                                            break;
                                                                    }
                                                                    break;
                                                                default:
                                                                    break;
                                                            }
                                                            break;
                                                        default:
                                                            break;
                                                    }
                                                    break;
                                                default:
                                                    break;
                                            }
                                            break;
                                        default:
                                            break;
                                    }
                                    break;
                                default:
                                    break;
                            }
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }

    return 0;
}
