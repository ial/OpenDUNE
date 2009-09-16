/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34CD
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34CD
 * @implements 34CD:0020 (0)
 * @implements 34CD:0025 (1)
 * @implements 34CD:002A (2)
 * @implements 34CD:002F (3)
 * @implements 34CD:0039 (5)
 * @implements 34CD:003E (6)
 * @implements 34CD:0043 (7)
 * @implements 34CD:0048 (8)
 * @implements 34CD:004D (9)
 * @implements 34CD:0057 (11)
 * @implements 34CD:005C (12)
 * @implements 34CD:0061 (13)
 * @implements 34CD:0066 (14)
 * @implements 34CD:006B (15)
 * @implements 34CD:0070 (16)
 * @implements 34CD:007F (19)
 * @implements 34CD:0084 (20)
 * @implements 34CD:008E (22)
 * @implements 34CD:0093 (23)
 * @implements 34CD:0098 (24)
 * @implements 34CD:00A2 (26)
 * @implements 34CD:00A7 (27)
 * @implements 34CD:00AC (28)
 * @implements 34CD:00B1 (29)
 * @implements 34CD:00B6 (30)
 * @implements 34CD:00BB (31)
 * @implements 34CD:00C0 (32)
 * @implements 34CD:00CA (34)
 *
 * Called From: 06F7:0319:0013:4514
 * Called From: 06F7:037D:0008:610A
 * Called From: 06F7:0748:000A:CA6A
 * Called From: 06F7:0758:0006:16E4
 * Called From: 06F7:0764:000C:C42B
 * Called From: 06F7:0772:0006:16E4
 * Called From: 06F7:07B5:0006:16E4
 * Called From: 06F7:0852:000A:9737
 * Called From: 06F7:08A9:002E:5B22
 * Called From: 06F7:08F3:0008:9754
 * Called From: 06F7:0AA2:0025:93F6
 * Called From: 06F7:0B33:0024:BD9C
 * Called From: 06F7:0B61:0024:BD9D
 * Called From: 07D4:01DC:001B:835B
 * Called From: 07D4:02A3:0016:367F
 * Called From: 07D4:07F4:0009:6097
 * Called From: 07D4:0A52:0045:4F52
 * Called From: 07D4:0BF6:0008:710A
 * Called From: 07D4:10F5:0006:F2E5
 * Called From: 07D4:1110:0006:C2E7
 * Called From: 07D4:1660:0012:553F
 * Called From: 07D4:17BD:0008:D904
 * Called From: 0972:13A1:002B:A9E3
 * Called From: 0AEC:0010:0010:9634
 * Called From: 0AEC:0039:000A:5A66
 * Called From: 0AEC:05D5:000A:7F37
 * Called From: 0AEC:0656:000B:36A0
 * Called From: 0AEC:0766:0006:06EE
 * Called From: 0AEC:079B:0013:A8AF
 * Called From: 0AEC:07BD:0012:353C
 * Called From: 0AEC:082A:0009:6093
 * Called From: 0AEC:0CF6:0009:6093
 * Called From: 0AEC:109D:000F:2295
 * Called From: 0AEC:11A5:0009:6093
 * Called From: 0AEC:1200:000F:2195
 * Called From: 0C3A:03B7:0008:F74D
 * Called From: 0C3A:03C0:0009:92AB
 * Called From: 0C3A:03E2:0022:C3F8
 * Called From: 0C3A:054D:0008:F74D
 * Called From: 0C3A:06DB:0017:F9DE
 * Called From: 0C3A:0AE1:000E:24E3
 * Called From: 0C3A:0C06:0017:6A02
 * Called From: 0C3A:0CBC:0018:FD80
 * Called From: 0C3A:0CE6:0008:0909
 * Called From: 0C3A:0D41:0008:7900
 * Called From: 0C3A:0DAD:0011:5F85
 * Called From: 0C3A:0DD6:0008:690A
 * Called From: 0C3A:210E:0027:F812
 * Called From: 0C3A:2470:0042:DBC6
 * Called From: 0C3A:24F4:0039:31C8
 * Called From: 0C3A:253F:0017:AE9B
 * Called From: 0C3A:255C:001D:434D
 * Called From: 0C3A:2567:000B:44D7
 * Called From: 0EDB:048B:0008:375A
 * Called From: 0F78:0235:001C:FC04
 * Called From: 0F78:0328:0006:66E9
 * Called From: 0F78:03DE:000D:0707
 * Called From: 10E4:10AD:0009:6093
 * Called From: 10E4:1CDD:0009:109E
 * Called From: 10E4:1CF3:0009:6093
 * Called From: 10E4:21E5:000F:0096
 * Called From: 10E4:229D:0012:78BD
 * Called From: 1423:0AFA:0009:AAB4
 * Called From: 151A:039A:0006:D6E6
 * Called From: 151A:03BC:000C:4178
 * Called From: 151A:041D:0021:A7FB
 * Called From: 151A:048B:000A:CA6A
 * Called From: 151A:0514:0081:CC96
 * Called From: 151A:067F:0073:AC77
 * Called From: 151A:06A1:000C:4178
 * Called From: 167E:0390:0009:AAB4
 * Called From: 176C:04AC:0011:B562
 * Called From: 176C:04ED:0008:475C
 * Called From: 176C:0503:0016:FC92
 * Called From: 176C:056C:002D:282D
 * Called From: 176C:065A:0022:E86D
 * Called From: 176C:0685:001C:F5FE
 * Called From: 176C:0A53:0039:07D4
 * Called From: 176C:0FC4:0014:1DEB
 * Called From: 176C:11B5:001F:9F0A
 * Called From: 176C:12A4:0014:2D96
 * Called From: 176C:1569:0007:1E5C
 * Called From: 176C:190D:0025:D2E2
 * Called From: 176C:2305:0008:5756
 * Called From: 176C:271C:000A:0E78
 * Called From: 176C:275D:002F:9271
 * Called From: 176C:2788:000F:C618
 * Called From: 176C:2966:001B:65D6
 * Called From: 1A34:018D:0006:22E8
 * Called From: 1A34:0211:0006:12E4
 * Called From: 1A34:0260:0043:57C5
 * Called From: 1A34:0283:000E:8289
 * Called From: 1A34:0413:0008:5756
 * Called From: 1A34:07A4:0006:62E9
 * Called From: 1A34:08AF:002A:0918
 * Called From: 1A34:0B21:0015:C072
 * Called From: 1A34:0DB3:0059:EBA0
 * Called From: 1A34:0E70:000A:0A68
 * Called From: 1A34:0EBA:0006:26E8
 * Called From: 1A34:0F2F:0006:66E9
 * Called From: 1A34:0FC8:001A:8ABB
 * Called From: 1A34:10C1:0012:6E18
 * Called From: 1A34:113E:0016:931E
 * Called From: 1A34:129F:0008:3755
 * Called From: 1A34:12DF:0008:3755
 * Called From: 1A34:16F3:0014:DAB1
 * Called From: 1A34:1745:0008:490A
 * Called From: 1A34:1811:003E:03D1
 * Called From: 1A34:1AA9:0009:2834
 * Called From: 1A34:1AD3:0006:62E9
 * Called From: 1A34:1BAB:0009:2834
 * Called From: 1A34:1BE5:0006:62E9
 * Called From: 1A34:2004:0012:7060
 * Called From: 1A34:200E:000A:8761
 * Called From: 1A34:201C:000E:768B
 * Called From: 1A34:2026:000A:B763
 * Called From: 1A34:203B:000F:8D11
 * Called From: 1A34:2341:0009:1DF9
 * Called From: 1A34:26A1:002F:A9D2
 * Called From: 1A34:2780:002A:9B6E
 * Called From: 1A34:289D:0008:5756
 * Called From: 1A34:2A8D:001A:5F59
 * Called From: 1A34:2AC8:0016:931E
 * Called From: 1A34:2BA9:0045:736F
 * Called From: 1A34:2FB5:0006:66E9
 * Called From: 1A34:2FC2:0006:16E4
 * Called From: 1A34:3177:001E:8618
 * Called From: 1A34:318F:0006:22E8
 * Called From: 1A34:3247:0006:62E9
 * Called From: 1A34:3284:0006:12E4
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4B5:0575:0008:3755
 * Called From: B4B5:0814:000D:8573
 * Called From: B4B5:0B4E:000E:A2FD
 * Called From: B4CD:0641:002A:6FEE
 * Called From: B4CD:0641:002A:6FEE
 * Called From: B4CD:0641:002A:6FEE
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4CD:0714:0032:BD9A
 * Called From: B4E9:011D:0024:BE26
 * Called From: B511:00BE:0006:22E8
 * Called From: B511:00EF:0017:80BE
 * Called From: B511:0137:002E:C197
 * Called From: B511:0182:0011:2C4F
 * Called From: B511:03D9:0009:6093
 */
void ovl__34CD(uint8 entry)
{
	if (emu_get_memory8(0x34CD, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34CD, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4CD_04C4_0010_846B(); return;
		case 1: f__B4CD_0566_0010_04C2(); return;
		case 2: f__B4CD_0194_0011_3CAE(); return;
		case 3: f__B4CD_017F_0010_C6FC(); return;
		case 5: f__B4CD_0408_001F_C54A(); return;
		case 6: f__B4CD_053B_0010_C4CD(); return;
		case 7: f__B4CD_048E_0012_3E9E(); return;
		case 8: f__B4CD_01AA_0010_06F1(); return;
		case 9: f__B4CD_1BC4_0013_1AB3(); return;
		case 11: f__B4CD_0F8B_0015_1689(); return;
		case 12: f__B4CD_17F7_001D_1CA2(); return;
		case 13: f__B4CD_0750_0027_7BA5(); return;
		case 14: f__B4CD_04D9_0011_E9EF(); return;
		case 15: f__B4CD_00A5_0016_24FA(); return;
		case 16: f__B4CD_0D74_0020_7CC1(); return;
		case 19: f__B4CD_17DC_0019_CB46(); return;
		case 20: f__B4CD_1178_000D_B1D5(); return;
		case 22: f__B4CD_01BF_0016_E78F(); return;
		case 23: f__B4CD_14CA_0013_F579(); return;
		case 24: f__B4CD_1816_0033_B55B(); return;
		case 26: f__B4CD_10EE_0039_EC73(); return;
		case 27: f__B4CD_08E7_002B_DC75(); return;
		case 28: f__B4CD_0AFA_0011_D5DB(); return;
		case 29: f__B4CD_0000_0011_95D0(); return;
		case 30: f__B4CD_1133_0039_A02F(); return;
		case 31: f__B4CD_07F4_0013_6862(); return;
		case 32: f__B4CD_1086_0040_F11C(); return;
		case 34: f__B4CD_1269_0019_A3E5(); return;
	}
}
