regex_pattern = r"[,\s]+"

import re
print("\n".join(re.split(regex_pattern, input())))