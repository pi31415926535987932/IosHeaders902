/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKShapeAnnotation.h>
#import <libobjc.A.dylib/AKTextAnnotationProtocol.h>

@class NSTextStorage, NSDictionary, NSString;

@interface AKArrowAnnotation : AKShapeAnnotation <AKTextAnnotationProtocol> {

	unsigned _arrowHeadStyle;
	NSTextStorage* _annotationText;
	NSDictionary* _typingAttributes;
	CGPoint _startPoint;
	CGPoint _endPoint;
	CGPoint _midPoint;

}

@property (assign) CGPoint startPoint;                              //@synthesize startPoint=_startPoint - In the implementation block
@property (assign) CGPoint endPoint;                                //@synthesize endPoint=_endPoint - In the implementation block
@property (assign) CGPoint midPoint;                                //@synthesize midPoint=_midPoint - In the implementation block
@property (assign) unsigned arrowHeadStyle;                         //@synthesize arrowHeadStyle=_arrowHeadStyle - In the implementation block
@property (retain) NSTextStorage * annotationText;                  //@synthesize annotationText=_annotationText - In the implementation block
@property (copy) NSDictionary * typingAttributes;                   //@synthesize typingAttributes=_typingAttributes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char isEditingText; 
@property (assign) char textIsFixedWidth; 
@property (assign) char textIsFixedHeight; 
@property (assign) char textIsClipped; 
@property (assign) char shouldUsePlaceholderText; 
+(char)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(CGPoint)endPoint;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)typingAttributes;
-(NSTextStorage *)annotationText;
-(void)setAnnotationText:(NSTextStorage *)arg1 ;
-(id)displayName;
-(CGPoint)midPoint;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(CGRect)hitTestBounds;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
-(unsigned)arrowHeadStyle;
-(void)setArrowHeadStyle:(unsigned)arg1 ;
-(void)setMidPoint:(CGPoint)arg1 ;
@end

