ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *fp;
    char *buf;
    ssize_t nrd, nwr;

    if (!filename) {
        return 0;
    }

    fp = fopen(filename, "r");
    if (!fp) {
        return 0;
    }

    buf = (char*) malloc(sizeof(char) * letters);
    if (!buf) {
        fclose(fp);
        return 0;
    }

    nrd = fread(buf, sizeof(char), letters, fp);
    nwr = fwrite(buf, sizeof(char), nrd, stdout);

    fclose(fp);
    free(buf);

    return nwr;
}
