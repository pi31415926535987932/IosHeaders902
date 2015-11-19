/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject {

	void* _line;
	NSATSTypesetter* _typesetter;
	NSRange _glyphRange;
	NSRange _characterRange;
	float _minPosition;
	float _maxPosition;
	long _elasticCharIndex;
	float _elasticRangeWidth;
	unsigned _hyphenGlyph;
	float _hyphenGlyphWidth;
	struct {
		unsigned _directionState : 2;
		unsigned _drawsOutside : 1;
		unsigned _reserved : 29;
	}  _flags;

}
-(void)dealloc;
-(void)_invalidate;
-(NSRange)glyphRange;
-(NSRange)characterRange;
-(void)finalize;
-(id)initWithTypesetter:(id)arg1 ;
-(void)layoutForStartingGlyphAtIndex:(unsigned)arg1 characterIndex:(unsigned)arg2 minPosition:(float)arg3 maxPosition:(float)arg4 lineFragmentRect:(CGRect)arg5 ;
-(void)getTypographicLineHeight:(float*)arg1 baselineOffset:(float*)arg2 leading:(float*)arg3 ;
-(void)justifyWithFactor:(float)arg1 ;
-(float)lineWidthForType:(int)arg1 ;
-(void)resolveOpticalAlignmentUpdatingMinPosition:(float*)arg1 maxPosition:(float*)arg2 ;
-(char)hasElasticRange;
-(void)saveMorphedGlyphs:(NSRange*)arg1 ;
-(void)saveWithGlyphOrigin:(float)arg1 ;
-(id)_copyRenderingContextWithGlyphOrigin:(float)arg1 ;
-(void)_flushCachedObjects;
-(int)resolvedLineBreakMode:(char)arg1 ;
-(long)_charIndexToBreakLineByWordWrappingAtIndex:(long)arg1 lineFragmentWidth:(float)arg2 hyphenate:(char*)arg3 ;
@end

