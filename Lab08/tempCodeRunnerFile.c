   printf("%s", msg);
    if (c.img < 0) {
        printf("%.1f - %.1fi\n", c.real, -c.img);
    } else if (c.img > 0) {
        printf("%.1f + %.1fi\n", c.real, c.img);
    } else {
        printf("%.1f\n", c.real);
    }