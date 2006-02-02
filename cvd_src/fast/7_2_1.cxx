/* Automatically generated code
corner_type=7
force_first_question=1 
corner_pointers=2
*/
#include <cvd/image.h>																			
#include <cvd/byte.h>																			
#include <vector>																				
																								
using namespace CVD;																			
using namespace std;																			
																								
namespace CVD
{
extern ImageRef dir[17];																		
																								
																								
void fastest_detect_7(const BasicImage<byte>& im, vector<ImageRef>& corners, int barrier)		
{																								
	int boundary = 3, y, cb, c_b;																
	const byte  *line_max, *line_min;															
	const byte* cache_0;
	const byte* cache_1;
	const byte* cache_2;
	int	pixel[16];																				
	for(int i=0; i < 16; i++)																	
		pixel[i] = dir[i].x + dir[i].y * im.size().x;											
																								
	for(y = boundary ; y < im.size().y - boundary; y++)											
	{																							
		cache_0 = &im[ImageRef(boundary, y)];													
		line_min = cache_0 - boundary;															
		line_max = &im[ImageRef(im.size().x - boundary, y)];									
																								
		cache_1 = cache_0 + pixel[13];
		cache_2 = cache_0 + pixel[11];
																								
		for(; cache_0 < line_max;cache_0++, cache_1++, cache_2++)
		{																						
			cb = *cache_0 + barrier;															
			c_b = *cache_0 - barrier;															
            if(*(cache_0+3) > cb)
                if(*(cache_0 + pixel[8]) > cb)
                    if(*(cache_0 + pixel[10]) > cb)
                        if(*(cache_2+6) > cb)
                            if(*(cache_0 + pixel[6]) > cb)
                                if(*(cache_0 + pixel[7]) > cb)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        goto success;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_1+6) > cb)
                                                goto success;
                                            else if(*(cache_1+6) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0+-3) > cb)
                                                    continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_1+6) > cb)
                                                goto success;
                                            else if(*(cache_1+6) < c_b)
                                                if(*cache_2 > cb || *cache_2 < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0+-3) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            if(*(cache_0 + pixel[14]) > cb)
                                                                if(*(cache_0 + pixel[15]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_1+6) > cb)
                                                            continue;
                                                        else
                                                            goto success;
                                                else
                                                    continue;
                                            else if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_1+6) < c_b)
                                                            if(*(cache_0 + pixel[14]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            if(*(cache_0 + pixel[14]) < c_b)
                                                                if(*(cache_0 + pixel[0]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        if(*(cache_1+6) < c_b)
                                                            if(*(cache_0 + pixel[14]) < c_b)
                                                                if(*(cache_0 + pixel[1]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[14]) > cb)
                                                            if(*cache_2 > cb)
                                                                if(*(cache_0 + pixel[15]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_1 < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else if(*(cache_0 + pixel[7]) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            goto success;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                goto success;
                                            else
                                                continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*cache_1 < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_1 > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else if(*(cache_0 + pixel[9]) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0 + pixel[0]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_1+6) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_1 > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_1 > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else if(*(cache_0 + pixel[9]) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0 + pixel[0]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else if(*cache_2 < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                if(*(cache_0 + pixel[2]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[15]) < c_b)
                                                            if(*(cache_0 + pixel[0]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*cache_1 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[0]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                            else if(*(cache_0 + pixel[6]) < c_b)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_1 > cb)
                                            if(*cache_2 > cb || *cache_2 < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[0]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    if(*(cache_0 + pixel[2]) > cb || *(cache_0 + pixel[2]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0+-3) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else if(*(cache_1+6) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0+-3) > cb)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb || *(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_1+6) > cb)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        continue;
                                    else
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_1 > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                            else
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*cache_1 > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            if(*(cache_0 + pixel[15]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*cache_1 < c_b)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*cache_2 < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*cache_1 < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[15]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            if(*(cache_0 + pixel[1]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*cache_1 > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[9]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            if(*(cache_1+6) > cb)
                                                                if(*(cache_0 + pixel[2]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            if(*(cache_1+6) > cb)
                                                                if(*(cache_0 + pixel[1]) > cb)
                                                                    if(*(cache_0 + pixel[0]) > cb)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*cache_2 < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            if(*(cache_0 + pixel[2]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            if(*(cache_0 + pixel[0]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                        else if(*(cache_2+6) < c_b)
                            if(*(cache_0 + pixel[15]) > cb)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            continue;
                                                        else if(*(cache_0 + pixel[6]) < c_b)
                                                            if(*(cache_0 + pixel[7]) > cb)
                                                                continue;
                                                            else
                                                                goto success;
                                                        else
                                                            goto success;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[1]) < c_b)
                                            continue;
                                        else
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_1+6) < c_b)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0+-3) > cb)
                                            if(*cache_1 > cb || *cache_1 < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            goto success;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_1+6) > cb || *(cache_1+6) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                continue;
                                            else
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[15]) < c_b)
                                if(*cache_1 > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*cache_2 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb || *(cache_0 + pixel[6]) < c_b)
                                                        continue;
                                                    else
                                                        goto success;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*cache_2 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[2]) > cb || *(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[2]) > cb || *(cache_0 + pixel[2]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0+-3) > cb)
                                    if(*cache_2 > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else
                                                        goto success;
                                                else if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            if(*(cache_0 + pixel[14]) > cb)
                                if(*(cache_1+6) > cb)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0+-3) > cb)
                                                        if(*cache_2 > cb)
                                                            if(*cache_1 > cb)
                                                                if(*(cache_0 + pixel[9]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else if(*cache_1 < c_b)
                                                                continue;
                                                            else
                                                                if(*(cache_0 + pixel[6]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            if(*cache_1 > cb)
                                                                goto success;
                                                            else if(*cache_1 < c_b)
                                                                continue;
                                                            else
                                                                if(*(cache_0 + pixel[6]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_2 > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else if(*(cache_0 + pixel[9]) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0 + pixel[0]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else if(*cache_1 < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            if(*(cache_0 + pixel[7]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*(cache_0+-3) > cb)
                                            if(*cache_2 > cb)
                                                if(*cache_1 > cb || *cache_1 < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0+-3) > cb)
                                            if(*cache_2 > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[9]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            if(*(cache_0 + pixel[9]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_1+6) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_1 > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else if(*cache_1 < c_b)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_1 > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            if(*(cache_0 + pixel[0]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*cache_1 < c_b)
                                            continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[14]) < c_b)
                                if(*(cache_0 + pixel[1]) > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb || *(cache_0 + pixel[6]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*cache_1 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[6]) < c_b)
                                                        continue;
                                                    else
                                                        if(*cache_1 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_1+6) < c_b)
                                            if(*cache_1 > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        if(*(cache_0 + pixel[15]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[6]) > cb || *(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_2 < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_1+6) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                continue;
                                            else
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0+-3) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                    else if(*(cache_0 + pixel[10]) < c_b)
                        if(*(cache_0 + pixel[6]) > cb)
                            if(*(cache_0 + pixel[2]) > cb)
                                if(*(cache_1+6) > cb)
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            goto success;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else if(*(cache_1+6) < c_b)
                                    continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_2+6) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[0]) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[2]) < c_b)
                                if(*(cache_0 + pixel[15]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[0]) > cb || *(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[15]) < c_b)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[0]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*cache_2 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[0]) > cb)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                continue;
                                            else
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else if(*(cache_1+6) < c_b)
                                            continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_1+6) > cb || *(cache_1+6) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[0]) < c_b)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_1 < c_b)
                                            if(*cache_2 > cb)
                                                continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0+-3) > cb)
                                                    continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                        else if(*(cache_0 + pixel[6]) < c_b)
                            if(*(cache_0 + pixel[0]) > cb)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                    else if(*(cache_1+6) < c_b)
                                        continue;
                                    else
                                        if(*(cache_0+-3) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_2+6) > cb)
                                        if(*cache_2 > cb)
                                            continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_1+6) > cb)
                                                goto success;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[0]) < c_b)
                                if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                        else
                            if(*(cache_0 + pixel[15]) > cb)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_1+6) < c_b)
                                        continue;
                                    else
                                        if(*(cache_0+-3) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[15]) < c_b)
                                if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[0]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[0]) < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                    else
                        if(*(cache_1+6) > cb)
                            if(*(cache_0 + pixel[6]) > cb)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            goto success;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    continue;
                                                else
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0+-3) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                if(*(cache_0 + pixel[14]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*cache_1 < c_b)
                                                            if(*(cache_0 + pixel[14]) < c_b)
                                                                if(*(cache_0 + pixel[0]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*cache_1 > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[14]) > cb)
                                                            if(*(cache_0 + pixel[15]) > cb)
                                                                if(*(cache_0 + pixel[0]) > cb)
                                                                    if(*(cache_0+-3) > cb)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            if(*cache_1 < c_b)
                                                                if(*(cache_0 + pixel[15]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[0]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[0]) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                continue;
                                            else
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0+-3) > cb)
                                                            if(*cache_1 > cb)
                                                                if(*(cache_0 + pixel[15]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_2 > cb)
                                                    if(*cache_1 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*cache_2 < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[6]) < c_b)
                                if(*(cache_0 + pixel[0]) > cb)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        continue;
                                    else
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*cache_2 > cb)
                                                    continue;
                                                else if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[0]) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_0 + pixel[15]) > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*cache_1 > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[15]) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_2 > cb)
                                                    continue;
                                                else if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_1+6) < c_b)
                            if(*(cache_0 + pixel[15]) > cb)
                                if(*(cache_0+-3) > cb)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            goto success;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_2 > cb)
                                                goto success;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[15]) < c_b)
                                if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                        else
                            if(*(cache_0 + pixel[1]) > cb)
                                if(*(cache_0+-3) > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[1]) < c_b)
                                if(*(cache_0+-3) < c_b)
                                    if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                else if(*(cache_0 + pixel[8]) < c_b)
                    if(*(cache_0+-3) > cb)
                        if(*(cache_0 + pixel[0]) > cb)
                            if(*(cache_0 + pixel[2]) > cb)
                                if(*(cache_0 + pixel[6]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_2+6) > cb)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[14]) > cb)
                                                            if(*(cache_0 + pixel[15]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_1+6) < c_b)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[6]) < c_b)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else if(*(cache_1+6) < c_b)
                                                    if(*cache_1 > cb)
                                                        goto success;
                                                    else if(*cache_1 < c_b)
                                                        if(*(cache_2+6) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                if(*(cache_0 + pixel[7]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        if(*(cache_2+6) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    if(*cache_1 > cb || *cache_1 < c_b)
                                                        goto success;
                                                    else
                                                        if(*cache_2 < c_b)
                                                            if(*(cache_2+6) < c_b)
                                                                if(*(cache_0 + pixel[7]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_2+6) < c_b)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[9]) > cb || *(cache_0 + pixel[9]) < c_b)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*cache_1 > cb)
                                                            if(*cache_2 > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*cache_2 > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_1+6) > cb || *(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_2+6) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_2 < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else
                                                    if(*cache_1 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_2+6) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[2]) < c_b)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*cache_2 > cb)
                                                if(*cache_1 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_1+6) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[10]) < c_b)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_1+6) < c_b)
                                                continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*cache_2 > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_2+6) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                        else if(*(cache_0 + pixel[0]) < c_b)
                            if(*(cache_2+6) > cb)
                                if(*cache_1 > cb)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_1+6) < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_2+6) < c_b)
                                if(*cache_2 > cb)
                                    if(*(cache_1+6) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[15]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            if(*(cache_0 + pixel[15]) < c_b)
                                                                if(*(cache_1+6) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        if(*cache_1 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_1+6) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_1+6) > cb)
                                    continue;
                                else if(*(cache_1+6) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                        else
                            if(*(cache_2+6) > cb)
                                if(*(cache_0 + pixel[7]) > cb)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else if(*cache_1 < c_b)
                                            continue;
                                        else
                                            goto success;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        continue;
                                    else
                                        if(*(cache_0 + pixel[9]) > cb)
                                            goto success;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[7]) < c_b)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_2+6) < c_b)
                                if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_1+6) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                    else if(*(cache_0+-3) < c_b)
                        if(*cache_2 > cb)
                            if(*(cache_0 + pixel[1]) > cb)
                                if(*(cache_1+6) > cb)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[1]) < c_b)
                                if(*(cache_0 + pixel[2]) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                        else if(*cache_2 < c_b)
                            if(*(cache_0 + pixel[14]) > cb)
                                if(*(cache_0 + pixel[0]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            if(*(cache_0 + pixel[10]) < c_b)
                                                                if(*(cache_0 + pixel[7]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        if(*cache_1 < c_b)
                                                            if(*(cache_0 + pixel[7]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            if(*(cache_0 + pixel[7]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                    else if(*(cache_1+6) < c_b)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[6]) > cb || *(cache_0 + pixel[6]) < c_b)
                                                    goto success;
                                                else
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else if(*(cache_0 + pixel[0]) < c_b)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*cache_1 < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                            else if(*(cache_0 + pixel[14]) < c_b)
                                if(*(cache_0 + pixel[10]) > cb)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[0]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[10]) < c_b)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            goto success;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[0]) < c_b)
                                            continue;
                                        else
                                            if(*(cache_0 + pixel[7]) > cb)
                                                goto success;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[7]) > cb)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[6]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[7]) < c_b)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            if(*(cache_0 + pixel[2]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else if(*(cache_0 + pixel[15]) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0 + pixel[6]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                if(*(cache_0 + pixel[0]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else
                                    if(*(cache_0 + pixel[0]) > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                        else
                            if(*(cache_0 + pixel[1]) > cb)
                                if(*(cache_1+6) > cb)
                                    if(*(cache_0 + pixel[0]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[15]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[15]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[7]) > cb)
                                            goto success;
                                        else
                                            continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[1]) < c_b)
                                if(*(cache_0 + pixel[2]) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                    else
                        if(*(cache_0 + pixel[0]) > cb)
                            if(*(cache_1+6) > cb)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*cache_2 < c_b)
                                                                if(*(cache_0 + pixel[7]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                if(*(cache_0 + pixel[10]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            if(*(cache_0 + pixel[10]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_2+6) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_1+6) < c_b)
                                if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[10]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_2+6) < c_b)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[0]) < c_b)
                            if(*(cache_1+6) > cb)
                                if(*(cache_2+6) < c_b)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_1+6) < c_b)
                                if(*cache_1 > cb)
                                    if(*(cache_2+6) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*(cache_0 + pixel[7]) < c_b)
                                                                if(*cache_2 < c_b)
                                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*cache_2 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_0 + pixel[10]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_2+6) < c_b)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            if(*(cache_2+6) > cb)
                                if(*(cache_0 + pixel[7]) > cb)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_2+6) < c_b)
                                if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                else
                    if(*(cache_0 + pixel[1]) > cb)
                        if(*(cache_0 + pixel[7]) > cb)
                            if(*(cache_1+6) > cb)
                                if(*(cache_0 + pixel[2]) > cb)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_2+6) > cb)
                                            goto success;
                                        else if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[0]) < c_b)
                                                        continue;
                                                    else
                                                        if(*cache_2 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*cache_2 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[2]) < c_b)
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_2+6) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*cache_1 > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else if(*(cache_0 + pixel[0]) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0 + pixel[9]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_1+6) < c_b)
                                if(*cache_1 > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*cache_1 > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[0]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[7]) < c_b)
                            if(*(cache_0 + pixel[15]) > cb)
                                if(*(cache_1+6) > cb)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[0]) > cb || *(cache_0 + pixel[0]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*cache_1 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb || *(cache_0 + pixel[9]) < c_b)
                                                continue;
                                            else
                                                goto success;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*cache_1 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*cache_1 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_1+6) < c_b)
                                    if(*cache_1 > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[6]) > cb || *(cache_0 + pixel[6]) < c_b)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[15]) < c_b)
                                if(*(cache_0 + pixel[0]) > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[0]) < c_b)
                                    if(*(cache_2+6) > cb || *(cache_2+6) < c_b)
                                        continue;
                                    else
                                        goto success;
                                else
                                    continue;
                            else
                                if(*(cache_0 + pixel[6]) > cb)
                                    if(*(cache_0 + pixel[0]) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            if(*(cache_0 + pixel[0]) > cb)
                                if(*(cache_1+6) > cb)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_2+6) > cb)
                                                goto success;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*cache_1 > cb)
                                                            if(*(cache_0 + pixel[15]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*cache_2 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[10]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0+-3) > cb)
                                                            if(*(cache_2+6) > cb || *(cache_2+6) < c_b)
                                                                continue;
                                                            else
                                                                if(*cache_2 > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                        else
                                                            continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    continue;
                                                else
                                                    if(*cache_2 > cb)
                                                        if(*cache_1 > cb)
                                                            if(*(cache_0+-3) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else if(*(cache_1+6) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[6]) > cb || *(cache_0 + pixel[6]) < c_b)
                                                        continue;
                                                    else
                                                        goto success;
                                                else
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[0]) < c_b)
                                if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0+-3) < c_b)
                                        if(*cache_1 < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_0 + pixel[15]) > cb)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0+-3) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[15]) < c_b)
                                    if(*(cache_0 + pixel[9]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                    else if(*(cache_0 + pixel[1]) < c_b)
                        if(*cache_1 > cb)
                            if(*(cache_0 + pixel[15]) > cb)
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[9]) < c_b)
                                    continue;
                                else
                                    if(*(cache_0 + pixel[0]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                continue;
                        else if(*cache_1 < c_b)
                            if(*(cache_0+-3) < c_b)
                                if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_1+6) < c_b)
                                    if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            continue;
                    else
                        if(*(cache_0 + pixel[15]) > cb)
                            if(*(cache_0 + pixel[10]) > cb)
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*cache_1 > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[9]) < c_b)
                                    if(*(cache_0 + pixel[0]) > cb)
                                        if(*cache_2 > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[0]) > cb)
                                        if(*cache_1 > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                continue;
                        else if(*(cache_0 + pixel[15]) < c_b)
                            if(*(cache_0 + pixel[9]) > cb)
                                if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*(cache_0 + pixel[0]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        continue;
                                    else
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[9]) < c_b)
                                if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_0 + pixel[0]) < c_b)
                                    if(*(cache_0 + pixel[10]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*cache_1 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            continue;
            else if(*(cache_0+3) < c_b)
                if(*(cache_0 + pixel[0]) > cb)
                    if(*(cache_0+-3) > cb)
                        if(*cache_1 > cb)
                            if(*(cache_0 + pixel[2]) > cb)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            goto success;
                                        else if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            if(*(cache_0 + pixel[8]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*(cache_0 + pixel[8]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            if(*(cache_1+6) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[6]) < c_b)
                                            continue;
                                        else
                                            if(*(cache_0 + pixel[10]) > cb)
                                                goto success;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[2]) < c_b)
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_2+6) > cb || *(cache_2+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    goto success;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            if(*(cache_1+6) < c_b)
                                                                if(*(cache_0 + pixel[7]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[8]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[8]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        continue;
                                                    else
                                                        goto success;
                                                else if(*(cache_0 + pixel[1]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_1+6) > cb || *(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_1+6) > cb)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[8]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_1+6) > cb || *(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                            else
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            if(*(cache_1+6) > cb)
                                                                continue;
                                                            else if(*(cache_1+6) < c_b)
                                                                goto success;
                                                            else
                                                                if(*(cache_0 + pixel[10]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_1+6) > cb)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*(cache_2+6) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else if(*(cache_1+6) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*(cache_1+6) > cb)
                                            continue;
                                        else
                                            goto success;
                                    else
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[15]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[8]) > cb || *(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_1+6) < c_b)
                                                            if(*(cache_0 + pixel[6]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_2+6) < c_b)
                                                                if(*(cache_0 + pixel[8]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            continue;
                                                        else if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                                continue;
                                                            else
                                                                goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_1+6) < c_b)
                                                        if(*(cache_2+6) < c_b)
                                                            if(*(cache_0 + pixel[8]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                        else if(*cache_1 < c_b)
                            if(*(cache_0 + pixel[7]) > cb)
                                if(*(cache_0 + pixel[6]) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[7]) < c_b)
                                if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                        else
                            if(*(cache_0 + pixel[7]) > cb)
                                if(*(cache_0 + pixel[6]) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[7]) < c_b)
                                if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[1]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                    else if(*(cache_0+-3) < c_b)
                        if(*(cache_0 + pixel[8]) > cb)
                            if(*(cache_2+6) > cb)
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[6]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_1+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            continue;
                                        else
                                            if(*(cache_1+6) > cb)
                                                if(*cache_1 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else if(*cache_2 < c_b)
                                    if(*cache_1 > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_1+6) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_2+6) < c_b)
                                if(*cache_1 > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*cache_1 > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[8]) < c_b)
                            if(*(cache_0 + pixel[6]) > cb)
                                if(*(cache_0 + pixel[10]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*cache_1 < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_2+6) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_1+6) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[6]) < c_b)
                                if(*(cache_2+6) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_1+6) > cb)
                                                    continue;
                                                else if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[14]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_1+6) > cb)
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_1+6) > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*cache_1 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*cache_1 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*cache_2 > cb)
                                        if(*(cache_1+6) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                goto success;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[7]) > cb || *(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        if(*(cache_1+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[14]) < c_b)
                                                        if(*(cache_1+6) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_1+6) > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_1+6) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                            else
                                if(*cache_1 > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[10]) < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            if(*(cache_1+6) > cb)
                                if(*cache_1 > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        goto success;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_1+6) < c_b)
                                if(*(cache_0 + pixel[1]) > cb)
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[15]) < c_b)
                                    if(*(cache_0 + pixel[9]) < c_b)
                                        goto success;
                                    else
                                        continue;
                                else
                                    continue;
                    else
                        if(*(cache_0 + pixel[8]) > cb)
                            if(*(cache_1+6) > cb)
                                if(*cache_1 > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_2+6) > cb)
                                            if(*cache_2 > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_2+6) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_1+6) < c_b)
                                if(*(cache_2+6) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[1]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_2+6) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[8]) < c_b)
                            if(*(cache_2+6) > cb)
                                if(*(cache_1+6) > cb)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_2+6) < c_b)
                                if(*(cache_0 + pixel[10]) > cb)
                                    if(*(cache_1+6) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_1+6) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_1+6) > cb)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*(cache_1+6) > cb)
                                                        if(*cache_1 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_1+6) > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_1+6) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_1+6) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[2]) > cb)
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_1+6) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_1+6) > cb)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            if(*(cache_1+6) > cb)
                                if(*cache_1 > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_1+6) < c_b)
                                if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                else if(*(cache_0 + pixel[0]) < c_b)
                    if(*(cache_0 + pixel[6]) > cb)
                        if(*(cache_0 + pixel[14]) > cb)
                            if(*cache_2 > cb)
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    goto success;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0+-3) < c_b)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*cache_1 < c_b)
                                                        continue;
                                                    else
                                                        goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[10]) < c_b)
                                        continue;
                                    else
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[9]) < c_b)
                                    if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_1+6) < c_b)
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[1]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[14]) < c_b)
                            if(*(cache_1+6) > cb)
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[8]) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[10]) > cb || *(cache_0 + pixel[10]) < c_b)
                                            continue;
                                        else
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                else if(*cache_2 < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_1+6) < c_b)
                                if(*(cache_0 + pixel[1]) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else if(*(cache_2+6) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            goto success;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            if(*(cache_0 + pixel[10]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            if(*(cache_0 + pixel[7]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*cache_1 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0+-3) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0+-3) < c_b)
                                    if(*cache_1 > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            if(*(cache_2+6) > cb)
                                                                if(*(cache_0 + pixel[9]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            if(*(cache_0 + pixel[2]) > cb || *(cache_0 + pixel[2]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_2+6) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                        else
                            if(*cache_2 > cb)
                                if(*(cache_0+-3) > cb)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        if(*cache_1 > cb)
                                                            if(*(cache_1+6) < c_b)
                                                                if(*(cache_0 + pixel[15]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else if(*cache_1 < c_b)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0+-3) < c_b)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*cache_1 > cb)
                                                    continue;
                                                else if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_1+6) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_0 + pixel[2]) > cb)
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[2]) < c_b)
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_1+6) > cb || *(cache_1+6) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[10]) < c_b)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                    else if(*(cache_0 + pixel[6]) < c_b)
                        if(*(cache_1+6) > cb)
                            if(*(cache_0 + pixel[8]) > cb)
                                if(*(cache_0+-3) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*cache_2 > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_1 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else if(*(cache_0+-3) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[7]) > cb || *(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[8]) < c_b)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0+-3) < c_b)
                                        if(*cache_2 > cb)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[2]) > cb)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0+-3) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[10]) < c_b)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*cache_1 < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0+-3) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0+-3) < c_b)
                                        if(*cache_2 > cb)
                                            continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[2]) > cb || *(cache_0 + pixel[2]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else
                                if(*cache_1 > cb)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*cache_2 > cb)
                                                continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_1+6) < c_b)
                            if(*(cache_0 + pixel[2]) > cb)
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*cache_2 > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[9]) < c_b)
                                    if(*(cache_2+6) > cb)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0+-3) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[2]) < c_b)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*cache_2 < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                goto success;
                                            else
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[8]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[8]) < c_b)
                                            goto success;
                                        else
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        goto success;
                                    else
                                        if(*(cache_0 + pixel[8]) > cb)
                                            if(*cache_1 > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else if(*cache_1 < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*cache_2 < c_b)
                                                            if(*(cache_0 + pixel[14]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[8]) < c_b)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0+-3) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*cache_1 < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                if(*(cache_0 + pixel[14]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[15]) < c_b)
                                                            if(*cache_2 < c_b)
                                                                if(*(cache_0 + pixel[14]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                else
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0 + pixel[8]) > cb)
                                            if(*cache_2 > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[8]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[15]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[15]) > cb)
                                                goto success;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0+-3) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*cache_1 > cb)
                                                                continue;
                                                            else if(*cache_1 < c_b)
                                                                goto success;
                                                            else
                                                                if(*(cache_0 + pixel[7]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        if(*cache_1 > cb || *cache_1 < c_b)
                                                            goto success;
                                                        else
                                                            if(*(cache_0 + pixel[7]) < c_b)
                                                                if(*(cache_0 + pixel[9]) < c_b)
                                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            if(*(cache_0 + pixel[7]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                            else
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*cache_1 > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            if(*(cache_0+-3) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_1 < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[9]) < c_b)
                                    if(*(cache_2+6) > cb)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        if(*cache_1 < c_b)
                                                            if(*(cache_0 + pixel[1]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*cache_1 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0+-3) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[10]) > cb || *(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            if(*(cache_0 + pixel[1]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                        else
                            if(*(cache_0 + pixel[9]) > cb)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*cache_1 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                            continue;
                                        else
                                            goto success;
                                    else
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[9]) < c_b)
                                if(*(cache_0 + pixel[10]) > cb)
                                    if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_2 < c_b)
                                                goto success;
                                            else
                                                continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            continue;
                                                        else if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            if(*cache_2 < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_1 > cb)
                                                    continue;
                                                else if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        if(*cache_2 < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[14]) < c_b)
                                                        if(*(cache_0 + pixel[15]) < c_b)
                                                            if(*(cache_0 + pixel[2]) > cb)
                                                                continue;
                                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                                if(*(cache_0 + pixel[1]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                if(*cache_2 < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0+-3) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            if(*(cache_0 + pixel[15]) < c_b)
                                                                if(*cache_2 > cb)
                                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else if(*cache_2 < c_b)
                                                                    goto success;
                                                                else
                                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_2 > cb)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            if(*(cache_0 + pixel[2]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            if(*(cache_0 + pixel[15]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            if(*(cache_0 + pixel[15]) < c_b)
                                                                if(*(cache_0 + pixel[1]) < c_b)
                                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            if(*(cache_2+6) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            if(*cache_2 < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            if(*cache_2 < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*cache_1 < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[15]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*cache_1 < c_b)
                                                            if(*(cache_0 + pixel[15]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0+-3) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                    else
                        if(*(cache_0 + pixel[14]) > cb)
                            if(*(cache_0 + pixel[8]) > cb)
                                if(*cache_2 > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            if(*(cache_2+6) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*cache_1 < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[2]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            continue;
                                        else
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            if(*(cache_2+6) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[8]) < c_b)
                                if(*(cache_2+6) > cb)
                                    continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_1+6) > cb)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*cache_1 < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                if(*(cache_1+6) > cb)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[15]) > cb)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[15]) < c_b)
                                    if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[14]) < c_b)
                            if(*(cache_1+6) > cb)
                                if(*cache_1 > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*cache_2 < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[7]) > cb || *(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_1+6) < c_b)
                                if(*(cache_0 + pixel[1]) > cb)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            goto success;
                                        else
                                            if(*cache_2 > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[8]) > cb)
                                            if(*cache_1 > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[8]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*cache_1 < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        continue;
                                                    else
                                                        goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[10]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*cache_1 > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[10]) > cb || *(cache_0 + pixel[10]) < c_b)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else
                                                        continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[15]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            if(*(cache_0 + pixel[10]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            if(*(cache_2+6) > cb)
                                if(*(cache_0 + pixel[7]) > cb)
                                    if(*cache_1 > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*cache_2 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[7]) < c_b)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_2+6) < c_b)
                                if(*(cache_0 + pixel[15]) > cb)
                                    continue;
                                else if(*(cache_0 + pixel[15]) < c_b)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*cache_1 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_1+6) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                goto success;
                                            else
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*cache_2 > cb)
                                                            if(*(cache_0 + pixel[8]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            if(*cache_2 < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            if(*(cache_0 + pixel[10]) > cb)
                                                                if(*(cache_0+-3) > cb)
                                                                    if(*(cache_0 + pixel[9]) > cb)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*cache_2 < c_b)
                                                            if(*(cache_0+-3) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*cache_1 > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            if(*(cache_0+-3) > cb)
                                                                if(*(cache_0 + pixel[8]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            if(*(cache_0 + pixel[9]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*cache_1 > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            if(*(cache_0 + pixel[8]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*cache_2 < c_b)
                                                            if(*(cache_0 + pixel[8]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*cache_1 > cb)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_1 < c_b)
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                else
                    if(*(cache_0 + pixel[7]) > cb)
                        if(*cache_2 > cb)
                            if(*(cache_0+-3) > cb)
                                if(*(cache_0 + pixel[10]) > cb)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_2+6) > cb || *(cache_2+6) < c_b)
                                                        continue;
                                                    else
                                                        goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*(cache_0 + pixel[14]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*cache_2 < c_b)
                            if(*(cache_0 + pixel[9]) < c_b)
                                if(*(cache_0 + pixel[15]) > cb)
                                    if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_1+6) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[15]) < c_b)
                                    if(*cache_1 < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                continue;
                        else
                            continue;
                    else if(*(cache_0 + pixel[7]) < c_b)
                        if(*(cache_2+6) > cb)
                            if(*cache_2 < c_b)
                                if(*(cache_0+-3) < c_b)
                                    if(*(cache_0 + pixel[10]) < c_b)
                                        if(*(cache_0 + pixel[8]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                        else if(*(cache_2+6) < c_b)
                            if(*(cache_0 + pixel[10]) > cb)
                                if(*(cache_0 + pixel[1]) > cb)
                                    if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        if(*cache_2 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_1+6) > cb)
                                            continue;
                                        else if(*(cache_1+6) < c_b)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        if(*cache_2 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[15]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*cache_1 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                    else
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*cache_1 > cb)
                                                        if(*(cache_0 + pixel[14]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0+-3) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[15]) < c_b)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_0+-3) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[8]) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_1+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                            else if(*(cache_0 + pixel[10]) < c_b)
                                if(*(cache_0 + pixel[8]) > cb)
                                    if(*(cache_0 + pixel[1]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[8]) < c_b)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*cache_2 < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            goto success;
                                        else
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_1+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_1 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            if(*(cache_1+6) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[15]) < c_b)
                                            if(*cache_1 < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            if(*cache_2 < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                            else
                                if(*(cache_1+6) < c_b)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[2]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[2]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[8]) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                        else
                            if(*cache_2 > cb)
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[15]) < c_b)
                                        continue;
                                    else
                                        if(*(cache_0 + pixel[8]) > cb)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                else
                                    continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_0+-3) < c_b)
                                    if(*(cache_0 + pixel[10]) < c_b)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else if(*cache_1 < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                        continue;
                                                    else
                                                        goto success;
                                                else if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[15]) < c_b)
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                    else
                        if(*(cache_0 + pixel[14]) > cb)
                            if(*(cache_0 + pixel[8]) > cb)
                                if(*(cache_0+-3) > cb)
                                    if(*cache_2 > cb)
                                        if(*cache_1 > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[8]) < c_b)
                                continue;
                            else
                                if(*(cache_0 + pixel[15]) > cb)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*cache_1 > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[14]) < c_b)
                            if(*(cache_0 + pixel[9]) < c_b)
                                if(*(cache_0 + pixel[8]) > cb)
                                    if(*cache_2 < c_b)
                                        if(*cache_1 < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[8]) < c_b)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*cache_1 < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[15]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*cache_1 < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                continue;
                        else
                            continue;
            else
                if(*cache_1 > cb)
                    if(*(cache_1+6) > cb)
                        if(*(cache_0 + pixel[15]) > cb)
                            if(*(cache_0 + pixel[14]) > cb)
                                if(*(cache_0 + pixel[1]) > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            goto success;
                                        else if(*(cache_0 + pixel[0]) < c_b)
                                            continue;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0+-3) > cb)
                                                            goto success;
                                                        else if(*(cache_0+-3) < c_b)
                                                            if(*(cache_2+6) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            if(*(cache_2+6) > cb)
                                                                if(*(cache_0 + pixel[7]) > cb)
                                                                    if(*(cache_0 + pixel[6]) > cb)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else if(*(cache_0+-3) < c_b)
                                                    if(*(cache_2+6) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            if(*(cache_0 + pixel[8]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*cache_2 > cb)
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            if(*(cache_0 + pixel[9]) > cb)
                                                                if(*(cache_0 + pixel[6]) > cb)
                                                                    if(*(cache_0 + pixel[8]) > cb)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    continue;
                                                else if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_0 + pixel[6]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else if(*(cache_0+-3) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*cache_2 > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[10]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    continue;
                                                else if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            if(*(cache_0 + pixel[6]) > cb)
                                                                if(*(cache_0 + pixel[8]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[8]) < c_b)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0+-3) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_0 + pixel[6]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[2]) > cb)
                                                            if(*(cache_0 + pixel[7]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[14]) < c_b)
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            goto success;
                                                        else if(*(cache_0 + pixel[6]) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0+-3) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0+-3) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_2+6) > cb)
                                                        continue;
                                                    else if(*(cache_2+6) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                            continue;
                                                        else
                                                            goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            goto success;
                                                        else
                                                            if(*(cache_0+-3) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else if(*(cache_2+6) < c_b)
                                                    if(*(cache_0+-3) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[0]) > cb || *(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else
                                                continue;
                                        else if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[15]) < c_b)
                            if(*cache_2 > cb)
                                if(*(cache_0 + pixel[8]) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_0 + pixel[7]) < c_b)
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                        else
                            if(*cache_2 > cb)
                                if(*(cache_0 + pixel[8]) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[0]) > cb || *(cache_0 + pixel[0]) < c_b)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else
                                                        if(*(cache_0+-3) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_2+6) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_0 + pixel[7]) < c_b)
                                    if(*(cache_2+6) > cb)
                                        continue;
                                    else if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                    else if(*(cache_1+6) < c_b)
                        if(*(cache_0 + pixel[8]) > cb)
                            if(*cache_2 > cb)
                                if(*(cache_0 + pixel[7]) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[10]) < c_b)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[7]) < c_b)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_0 + pixel[2]) > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[15]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_0 + pixel[2]) > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_0 + pixel[8]) < c_b)
                            if(*cache_2 > cb)
                                if(*(cache_0 + pixel[0]) > cb)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[0]) < c_b)
                                    if(*(cache_0 + pixel[15]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0 + pixel[2]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            goto success;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[6]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[2]) > cb)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            if(*(cache_0 + pixel[15]) > cb)
                                if(*(cache_0+-3) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                    else
                        if(*(cache_0+-3) > cb)
                            if(*(cache_0 + pixel[8]) > cb)
                                if(*(cache_0 + pixel[14]) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                goto success;
                                            else if(*(cache_0 + pixel[9]) < c_b)
                                                continue;
                                            else
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[2]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[15]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[14]) < c_b)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*(cache_0 + pixel[8]) < c_b)
                                if(*(cache_0 + pixel[0]) > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[1]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*cache_2 < c_b)
                                                            if(*(cache_2+6) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[15]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*cache_2 < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            continue;
                                        else
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_2+6) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    if(*(cache_0 + pixel[15]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[15]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_0 + pixel[6]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[0]) < c_b)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[9]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[15]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[15]) > cb)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    goto success;
                                                else if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*cache_2 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_2+6) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*cache_2 > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_0 + pixel[9]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[0]) > cb)
                                                            if(*cache_2 > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[10]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[0]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            if(*(cache_0 + pixel[1]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[0]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[14]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            goto success;
                                                        else if(*(cache_0 + pixel[6]) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0 + pixel[0]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            if(*(cache_0 + pixel[14]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                        else
                                            continue;
                                else
                                    continue;
                        else if(*(cache_0+-3) < c_b)
                            if(*(cache_0 + pixel[6]) > cb)
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[6]) < c_b)
                                if(*(cache_0 + pixel[9]) < c_b)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[8]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                        else
                            if(*cache_2 > cb)
                                if(*(cache_0 + pixel[7]) > cb)
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_0 + pixel[7]) < c_b)
                                    if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[6]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                continue;
                else if(*cache_1 < c_b)
                    if(*(cache_0 + pixel[15]) > cb)
                        if(*cache_2 > cb)
                            if(*(cache_0 + pixel[7]) > cb)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[8]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                continue;
                        else if(*cache_2 < c_b)
                            if(*(cache_0 + pixel[8]) < c_b)
                                if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0 + pixel[7]) > cb)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                continue;
                                            else
                                                goto success;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[7]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                        else
                            continue;
                    else if(*(cache_0 + pixel[15]) < c_b)
                        if(*(cache_1+6) > cb)
                            if(*cache_2 > cb)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        goto success;
                                                    else if(*(cache_0 + pixel[10]) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            if(*(cache_0 + pixel[14]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else if(*(cache_0 + pixel[7]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[2]) < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[2]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else if(*(cache_0 + pixel[8]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[2]) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb || *(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[6]) > cb || *(cache_0 + pixel[6]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[2]) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0+-3) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0 + pixel[2]) < c_b)
                                        if(*(cache_0+-3) > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else if(*cache_2 < c_b)
                                if(*(cache_0 + pixel[9]) > cb)
                                    if(*(cache_0 + pixel[1]) > cb)
                                        continue;
                                    else if(*(cache_0 + pixel[1]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[9]) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[14]) > cb)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*(cache_0 + pixel[0]) < c_b)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                if(*(cache_0 + pixel[2]) < c_b)
                                    if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else if(*(cache_1+6) < c_b)
                            if(*(cache_0 + pixel[2]) > cb)
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[8]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb || *(cache_0 + pixel[1]) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[0]) < c_b)
                                                    continue;
                                                else
                                                    goto success;
                                            else if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[1]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        if(*(cache_0+-3) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_2+6) > cb)
                                                    goto success;
                                                else if(*(cache_2+6) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                        else
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[1]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else if(*(cache_0 + pixel[2]) < c_b)
                                if(*(cache_0 + pixel[1]) > cb)
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[7]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_2+6) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[0]) > cb)
                                                    continue;
                                                else
                                                    goto success;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[6]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[1]) < c_b)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[6]) > cb)
                                                if(*(cache_0 + pixel[8]) > cb)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else if(*(cache_2+6) < c_b)
                                                        continue;
                                                    else
                                                        if(*(cache_0+-3) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0+-3) > cb || *(cache_0+-3) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_2+6) < c_b)
                                                            if(*(cache_0 + pixel[0]) < c_b)
                                                                if(*(cache_0 + pixel[10]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                else
                                                    if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[0]) > cb)
                                            continue;
                                        else if(*(cache_0 + pixel[0]) < c_b)
                                            goto success;
                                        else
                                            if(*cache_2 > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_2+6) > cb)
                                                            if(*(cache_0 + pixel[9]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else if(*(cache_2+6) < c_b)
                                                            continue;
                                                        else
                                                            if(*(cache_0+-3) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0+-3) < c_b)
                                                            goto success;
                                                        else
                                                            if(*(cache_2+6) < c_b)
                                                                if(*(cache_0 + pixel[7]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            if(*(cache_0 + pixel[10]) > cb)
                                                                if(*(cache_0 + pixel[8]) > cb)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_2+6) < c_b)
                                                    continue;
                                                else
                                                    if(*(cache_0+-3) > cb)
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            if(*(cache_0 + pixel[9]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0+-3) > cb)
                                                            if(*(cache_2+6) < c_b)
                                                                if(*(cache_0 + pixel[6]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else if(*(cache_0+-3) < c_b)
                                                            if(*(cache_0 + pixel[8]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            if(*(cache_2+6) < c_b)
                                                                if(*(cache_0 + pixel[6]) < c_b)
                                                                    if(*(cache_0 + pixel[8]) < c_b)
                                                                        goto success;
                                                                    else
                                                                        continue;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*cache_2 > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[6]) > cb)
                                                            if(*(cache_0 + pixel[8]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0+-3) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0+-3) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            if(*(cache_0 + pixel[10]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[14]) < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[14]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[14]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_0 + pixel[8]) < c_b)
                                                                if(*(cache_0 + pixel[10]) < c_b)
                                                                    goto success;
                                                                else
                                                                    continue;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0+-3) < c_b)
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else
                                if(*cache_2 > cb)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_2+6) < c_b)
                                            continue;
                                        else
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_0 + pixel[6]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*(cache_0+-3) < c_b)
                                            if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[1]) > cb)
                                                    continue;
                                                else if(*(cache_0 + pixel[1]) < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0+-3) > cb)
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) > cb)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[14]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_2+6) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        if(*(cache_0 + pixel[7]) < c_b)
                                                            if(*(cache_0 + pixel[8]) < c_b)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0+-3) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0+-3) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                        else
                            if(*(cache_0+-3) > cb)
                                if(*(cache_0 + pixel[6]) > cb)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_0 + pixel[6]) < c_b)
                                    if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_2+6) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_0+-3) < c_b)
                                if(*(cache_0 + pixel[2]) > cb)
                                    if(*(cache_0 + pixel[9]) > cb)
                                        if(*cache_2 > cb)
                                            if(*(cache_2+6) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        if(*(cache_2+6) > cb || *(cache_2+6) < c_b)
                                                            continue;
                                                        else
                                                            goto success;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[9]) < c_b)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb || *(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            continue;
                                    else
                                        if(*(cache_0 + pixel[0]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[10]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[10]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[1]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else if(*(cache_0 + pixel[2]) < c_b)
                                    if(*(cache_0 + pixel[14]) > cb)
                                        if(*cache_2 < c_b)
                                            if(*(cache_0 + pixel[8]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0 + pixel[14]) < c_b)
                                        if(*(cache_0 + pixel[1]) > cb)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[1]) < c_b)
                                            if(*(cache_0 + pixel[0]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[0]) < c_b)
                                                goto success;
                                            else
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    if(*cache_2 > cb)
                                                        if(*(cache_2+6) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*cache_2 < c_b)
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*cache_2 > cb)
                                                    if(*(cache_2+6) > cb)
                                                        if(*(cache_0 + pixel[7]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[10]) < c_b)
                                                if(*cache_2 < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*cache_2 > cb)
                                                if(*(cache_2+6) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[10]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else if(*(cache_0 + pixel[7]) < c_b)
                                            if(*cache_2 < c_b)
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    if(*cache_2 > cb)
                                        if(*(cache_2+6) > cb)
                                            if(*(cache_0 + pixel[8]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[9]) > cb)
                                                            if(*(cache_0 + pixel[7]) > cb)
                                                                goto success;
                                                            else
                                                                continue;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*cache_2 < c_b)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[1]) > cb)
                                                continue;
                                            else if(*(cache_0 + pixel[1]) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                if(*(cache_0 + pixel[10]) < c_b)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        if(*(cache_0 + pixel[14]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[14]) > cb)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[7]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else if(*(cache_0 + pixel[14]) < c_b)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[0]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else if(*(cache_0 + pixel[10]) < c_b)
                                                    goto success;
                                                else
                                                    if(*(cache_0 + pixel[1]) < c_b)
                                                        if(*(cache_0 + pixel[0]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                            else
                                                if(*(cache_0 + pixel[7]) < c_b)
                                                    if(*(cache_0 + pixel[10]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                        else
                                            if(*(cache_0 + pixel[0]) < c_b)
                                                if(*(cache_0 + pixel[14]) < c_b)
                                                    if(*(cache_0 + pixel[1]) > cb)
                                                        continue;
                                                    else if(*(cache_0 + pixel[1]) < c_b)
                                                        goto success;
                                                    else
                                                        if(*(cache_0 + pixel[10]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        continue;
                            else
                                if(*cache_2 > cb)
                                    if(*(cache_2+6) > cb)
                                        if(*(cache_0 + pixel[9]) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    if(*(cache_0 + pixel[6]) > cb)
                                                        if(*(cache_0 + pixel[8]) > cb)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*cache_2 < c_b)
                                    if(*(cache_2+6) < c_b)
                                        if(*(cache_0 + pixel[7]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        if(*(cache_0 + pixel[8]) < c_b)
                                                            goto success;
                                                        else
                                                            continue;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                    else
                        if(*(cache_0 + pixel[8]) > cb)
                            if(*cache_2 > cb)
                                if(*(cache_2+6) > cb)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else if(*(cache_2+6) < c_b)
                                    if(*(cache_0 + pixel[6]) > cb)
                                        if(*(cache_0+-3) > cb)
                                            if(*(cache_0 + pixel[10]) > cb)
                                                if(*(cache_0 + pixel[7]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_0 + pixel[6]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[10]) > cb)
                                                    if(*(cache_0 + pixel[9]) > cb)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                            else
                                continue;
                        else if(*(cache_0 + pixel[8]) < c_b)
                            if(*cache_2 < c_b)
                                if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0+-3) > cb)
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    if(*(cache_0 + pixel[6]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[14]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[9]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                    else
                                        if(*(cache_2+6) < c_b)
                                            if(*(cache_0 + pixel[7]) < c_b)
                                                if(*(cache_0 + pixel[6]) < c_b)
                                                    if(*(cache_0 + pixel[9]) < c_b)
                                                        goto success;
                                                    else
                                                        continue;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                else
                                    continue;
                            else
                                continue;
                        else
                            continue;
                else
                    if(*cache_2 > cb)
                        if(*(cache_0 + pixel[6]) > cb)
                            if(*(cache_2+6) > cb)
                                if(*(cache_0 + pixel[8]) > cb)
                                    if(*(cache_0 + pixel[10]) > cb)
                                        if(*(cache_0 + pixel[7]) > cb)
                                            if(*(cache_0 + pixel[9]) > cb)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_0+-3) > cb)
                                    if(*(cache_0 + pixel[8]) > cb)
                                        if(*(cache_0 + pixel[10]) > cb)
                                            if(*(cache_0 + pixel[7]) > cb)
                                                if(*(cache_0 + pixel[9]) > cb)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            continue;
                    else if(*cache_2 < c_b)
                        if(*(cache_0 + pixel[7]) < c_b)
                            if(*(cache_2+6) > cb)
                                if(*(cache_0 + pixel[6]) < c_b)
                                    if(*(cache_0+-3) < c_b)
                                        if(*(cache_0 + pixel[10]) < c_b)
                                            if(*(cache_0 + pixel[9]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else if(*(cache_2+6) < c_b)
                                if(*(cache_0 + pixel[10]) < c_b)
                                    if(*(cache_0 + pixel[9]) < c_b)
                                        if(*(cache_0 + pixel[6]) < c_b)
                                            if(*(cache_0 + pixel[8]) < c_b)
                                                goto success;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                            else
                                if(*(cache_0+-3) < c_b)
                                    if(*(cache_0 + pixel[6]) < c_b)
                                        if(*(cache_0 + pixel[9]) < c_b)
                                            if(*(cache_0 + pixel[10]) < c_b)
                                                if(*(cache_0 + pixel[8]) < c_b)
                                                    goto success;
                                                else
                                                    continue;
                                            else
                                                continue;
                                        else
                                            continue;
                                    else
                                        continue;
                                else
                                    continue;
                        else
                            continue;
                    else
                        continue;
			success:																			
				corners.push_back(ImageRef(cache_0-line_min, y));								
		}																						
	}																							
}																								
																								
																								}
