#ifndef COSMOPOLITAN_LIBC_NT_NT_SECTIONS_H_
#define COSMOPOLITAN_LIBC_NT_NT_SECTIONS_H_
#include "libc/nt/enum/sectioninformationclass.h"
#include "libc/nt/enum/sectioninherit.h"
#include "libc/nt/enum/status.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

struct NtObjectAttributes;

NtStatus NtCreateSection(int64_t *out_SectionHandle, uint32_t DesiredAccess,
                         struct NtObjectAttributes *ObjectAttributes,
                         int64_t *opt_SectionSize, uint32_t Protect,
                         uint32_t Attributes, int64_t FileHandle);
NtStatus NtOpenSection(int64_t *out_SectionHandle, uint32_t DesiredAccess,
                       struct NtObjectAttributes *ObjectAttributes);
NtStatus NtMapViewOfSection(int64_t SectionHandle, int64_t ProcessHandle,
                            void **inout_BaseAddress, uint32_t *ZeroBits,
                            size_t CommitSize, int64_t *opt_inout_SectionOffset,
                            size_t *inout_ViewSize,
                            enum NtSectionInherit InheritDisposition,
                            uint32_t AllocationType, uint32_t Protect);
NtStatus NtUnmapViewOfSection(int64_t ProcessHandle, void *BaseAddress);
NtStatus NtQuerySection(int64_t SectionHandle,
                        enum NtSectionInformationClass SectionInformationClass,
                        void *out_SectionInformation,
                        uint32_t SectionInformationLength,
                        uint32_t *opt_out_ResultLength);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NT_NT_SECTIONS_H_ */