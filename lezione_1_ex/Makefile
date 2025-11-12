BIN_FOLDER=./bin

all: $(BIN_FOLDER) | string_input memory numbers

string_input:
	g++ $@.cpp -o ${BIN_FOLDER}/$@

memory:
	g++ $@.cpp -o ${BIN_FOLDER}/$@

numbers:
	g++ $@.cpp -o ${BIN_FOLDER}/$@

$(BIN_FOLDER):
	@mkdir $(BIN_FOLDER)

clean:
	@rm -r ${BIN_FOLDER}