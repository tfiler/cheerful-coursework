.PHONY: clean All

All:
	@echo "----------Building project:[ VectorsAndArrays - Debug ]----------"
	@cd "VectorsAndArrays" && "$(MAKE)" -f  "VectorsAndArrays.mk"
clean:
	@echo "----------Cleaning project:[ VectorsAndArrays - Debug ]----------"
	@cd "VectorsAndArrays" && "$(MAKE)" -f  "VectorsAndArrays.mk" clean
