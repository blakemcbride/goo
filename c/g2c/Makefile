C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
%.o: %.c ../grt.h ../grt-protos.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/math.o \
	goo/%math.o \
	goo/fun.o \
	goo/sym.o \
	goo/cols/vec.o \
	eval/dependency.o \
	eval/module.o \
	goo/bignum.o \
	goo/cols/rep.o \
	goo.o \
	time/threads.o \
	time/%threads.o \
	goo/mag.o \
	goo/cols/col.o \
	goo/cols/zip.o \
	goo/cols/opts.o \
	eval/syntax.o \
	goo/io/port.o \
	goo/io/%port.o \
	goo/cols/step.o \
	goo/functional.o \
	goo/cols/colx.o \
	goo/types.o \
	eval/ast.o \
	goo/user.o \
	eval/top.o \
	goo/eval.o \
	goo/cols/tab.o \
	time/event.o \
	time/%event.o \
	goo/io/read.o \
	goo/system.o \
	goo/%system.o \
	eval/g2c.o \
	goo/app.o \
	goo/log.o \
	eval/main.o \
	goo/cols/tup.o \
	goo/cols/seqx.o \
	goo/random.o \
	goo/late-macros.o \
	goo/cols.o \
	goo/boot.o \
	goo/packer.o \
	goo/chr.o \
	goo/cols/str.o \
	goo/any.o \
	goo/cols/range.o \
	goo/cols/map.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/lst.o \
	eval/optimize.o \
	goo/macros.o \
	goo/x.o \
	goo/io/write.o \
	eval/ast-linearize.o \
	goo/loc.o \
	goo/cols/seq.o \
	goo/cols/cycle.o \
	goo/class.o \
	goo/conditions.o \
	goo/cols/flat.o \
	eval/ast-eval.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS) -lgmp

clean:
	rm -f g2c $(OBJS)
