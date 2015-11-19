/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFAnnotation.h>

@class UIPDFAnnotation;

@interface UIPDFPopupAnnotation : UIPDFAnnotation {

	UIPDFAnnotation* parent;
	CGRect _adjustedBounds;

}

@property (assign,nonatomic) UIPDFAnnotation * parent; 
@property (assign,nonatomic) CGRect adjustedBounds;                 //@synthesize adjustedBounds=_adjustedBounds - In the implementation block
-(CGRect)bounds;
-(id)init;
-(Class)viewClass;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
-(char)recognizeGestures;
-(CGRect)adjustedBounds;
-(void)setAdjustedBounds:(CGRect)arg1 ;
-(UIPDFAnnotation *)parent;
-(void)setParent:(UIPDFAnnotation *)arg1 ;
-(int)annotationType;
@end

