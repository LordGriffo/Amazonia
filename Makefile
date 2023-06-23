DIRS := \
    Abacaxi \
    Araucaria \
    Butia \
    Cacau \
    Cagaita \
    Caju \
    Cambuci \
    Cambui \
    Camucamu \
    Gabiroba \
    Guarana \
    Murici \
    Pitanga \
    Canistel

all:
    @for dir in $(DIRS); do \
        echo "Building in $$dir..."; \
        $(MAKE) -C $$dir; \
        echo ""; \
    done

.PHONY: all
