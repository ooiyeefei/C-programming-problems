char *
strdup(str)
		const char *str;
{
		size_t len;
			char *copy;

				len = strlen(str) + 1;
					if (!(copy = malloc((u_int)len)))
								return (NULL);
						bcopy(str, copy, len);
						//or memcpy:
							return (copy);
}
