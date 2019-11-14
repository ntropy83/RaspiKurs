.PHONY: clean All

All:
	@echo "----------Building project:[ GUItest - Debug ]----------"
	@cd "GUItest" && "$(MAKE)" -f  "GUItest.mk"
clean:
	@echo "----------Cleaning project:[ GUItest - Debug ]----------"
	@cd "GUItest" && "$(MAKE)" -f  "GUItest.mk" clean
