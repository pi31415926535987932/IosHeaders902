/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSTextLayoutOrientationProvider.h>

@class NSLayoutManager, NSArray, NSDictionary;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider> {

	NSLayoutManager* _layoutManager;
	id _textView;
	CGSize _size;
	float _lineFragmentPadding;
	unsigned _maximumLines;
	struct {
		unsigned widthTracksTextView : 1;
		unsigned heightTracksTextView : 1;
		unsigned observingFrameChanges : 1;
		unsigned lineBreakMode : 4;
		unsigned oldAPI : 1;
		unsigned _reserved : 8;
	}  _tcFlags;
	NSArray* _exclusionPaths;
	CGPathRef _cachedBoundingPath;
	CFArrayRef _cachedClippingAttributes;
	CFArrayRef _cachedBounds;
	float _cacheBoundsMinY;
	float _cacheBoundsMaxY;
	float _minimumWidth;
	int _layoutOrientation;
	NSDictionary* _attributesForExtraLineFragment;

}

@property (readonly) char isSimpleRectangularTextContainer; 
@property (assign,nonatomic) NSLayoutManager * layoutManager; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSArray * exclusionPaths; 
@property (assign,nonatomic) int lineBreakMode; 
@property (assign,nonatomic) float lineFragmentPadding; 
@property (assign,nonatomic) unsigned maximumNumberOfLines; 
@property (getter=isSimpleRectangularTextContainer,nonatomic,readonly) char simpleRectangularTextContainer; 
@property (assign,nonatomic) char widthTracksTextView; 
@property (assign,nonatomic) char heightTracksTextView; 
@property (nonatomic,readonly) int layoutOrientation; 
+(void)initialize;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(char*)arg3 ;
-(void)akSetContainerSize:(CGSize)arg1 ;
-(id)initWithContainerSize:(CGSize)arg1 ;
-(CGSize)akContainerSize;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setLineBreakMode:(int)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned)arg1 ;
-(void)_commonInit;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(NSLayoutManager *)layoutManager;
-(void)setTextView:(id)arg1 ;
-(void)setLineFragmentPadding:(float)arg1 ;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(void)setAttributesForExtraLineFragment:(id)arg1 ;
-(CGPoint)textContainerOrigin;
-(int)layoutOrientation;
-(void)setLayoutOrientation:(int)arg1 ;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(int)lineBreakMode;
-(id)textView;
-(char)widthTracksTextView;
-(char)heightTracksTextView;
-(void)setWidthTracksTextView:(char)arg1 ;
-(void)setHeightTracksTextView:(char)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
-(NSArray *)exclusionPaths;
-(void)setExclusionPaths:(NSArray *)arg1 ;
-(float)lineFragmentPadding;
-(unsigned)maximumNumberOfLines;
-(id)attributesForExtraLineFragment;
-(id)initWithContainerSize:(CGSize)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(char)isSimpleRectangularTextContainer;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned)arg2 writingDirection:(int)arg3 remainingRect:(CGRect*)arg4 ;
-(void)_resizeAccordingToTextView:(id)arg1 ;
-(float)minimumLineFragmentWidth;
-(void)replaceLayoutManager:(id)arg1 ;
-(void)setMinimumLineFragmentWidth:(float)arg1 ;
-(CGSize)containerSize;
@end

