/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSLineFragment, NSATSGlyphStorage, NSParagraphArbitrator;

@interface _NSATSTypesetterGuts : NSObject {

	NSATSLineFragment* _lineFragment;
	NSATSGlyphStorage* _glyphStorage;
	unsigned _lastGlyphIndex;
	unsigned _lastContainerIndex;
	SCD_Struct_NS2* _typesetterAuxiliary;
	/*function pointer*/void** _lineFragmentRectArgs;
	char* _bidiLevels;
	float _defaultTighteningFactor;
	unsigned _lineBreakStrategy;
	struct {
		unsigned _isiChatTypesetter : 1;
		unsigned _resToWillSetLineFragmentRect : 1;
		unsigned _isBusy : 1;
		unsigned _baselineRendering : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _reserved : 27;
	}  _flags;
	SCD_Struct_NS3 _paragraphState;
	CTTypesetterRef _ctTypesetter;
	NSParagraphArbitrator* _paragraphArbitrator;

}
-(void)dealloc;
-(void)finalize;
-(id)initWithTypesetter:(id)arg1 ;
@end
