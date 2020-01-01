int mx_isspace(char c) {
    return (c == ' ' || (c >= '\t' && c <= '\r')) ? 1 : 0;
}
