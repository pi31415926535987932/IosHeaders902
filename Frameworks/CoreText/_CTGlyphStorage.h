/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:14:32 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@interface _CTGlyphStorage : NSObject {

	long _count;
	const unsigned short* _glyphs;
	const CGSize* _advances;
	const unsigned* _props;
	const int* _stringIndices;

}
-(void)setProps:(unsigned)arg1 atIndex:(long)arg2 ;
-(void)initGlyphStackWithCapacity:(long)arg1 ;
-(void)pushGlyphAtIndex:(long)arg1 ;
-(void)popGlyphAtIndex:(long)arg1 ;
-(long)attachmentCountAtIndex:(long)arg1 ;
-(CGPoint)originAtIndex:(long)arg1 ;
-(void)setStringIndex:(long)arg1 atIndex:(long)arg2 ;
-(void)setAttachmentCount:(long)arg1 atIndex:(long)arg2 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long)arg2 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void*)refCon;
-(void)setOrigin:(CGPoint)arg1 atIndex:(long)arg2 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long)arg2 ;
-(id)initWithCount:(long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)sync;
-(void)disposeGlyphStack;
@end

