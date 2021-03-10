char key[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
main()
{
	char *aux, *p_aux, *cap_let, *p_key, *malloc(), *gets();
	for(aux = malloc(81), cap_let = aux++; aux == gets(aux); print('\n'))
		for (p_aux = aux; *p_aux; print(*p_key ? conv_2_morse(*cap_let ) : '?' ), print(' '), p_aux++)
			for (*cap_let = 2, p_key = key; *p_key && (*p_key != (*p_aux >='a' ? *p_aux & 223 : *p_aux)); (*cap_let )++, p_key++)
				*cap_let += (*p_key >= 'a' ? *p_key - 'a' : 0);
}
conv_2_morse(cap_let)
{
	print (cap_let > 3 ? conv_2_morse(cap_let>>1) : '\0');
	return cap_let&1 ? '-' : '.';
}
print(cap_let)
char cap_let;
{
	(void)write(1, &cap_let, 1);
}
