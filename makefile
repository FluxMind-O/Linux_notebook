OBJS=notebook.o

notebook: $(OBJS)
	$(CC) -o $@ $(OBJS)

notebook.o:notebook.c
	$(CC) -c $<

.PHONY:clean
clean:
	$(RM) -f * .o
