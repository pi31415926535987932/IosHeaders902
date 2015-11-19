/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPShape : CPGraphicObject <CPDisposable> {

	unsigned pdfObjectID;
	CGPathRef path;
	char isUprightRectangle;
	int windingRule;
	float lineWidth;
	float miterLimit;
	int lineCap;
	int lineJoin;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CGPDFObject* fillObject;
	CGPDFObject* strokeObject;
	CGAffineTransform paintTransform;
	char boundsComputed;
	char renderedBoundsComputed;

}
-(int)lineCap;
-(void)dispose;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(id)string;
-(char)isVisible;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(id)attributes;
-(id)initWithPDFShape:(CPPDFShape*)arg1 ;
-(void)addShape:(id)arg1 ;
-(long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(unsigned)pathElementCount;
-(void)recomputeRenderedBounds;
-(void)recomputeBounds;
-(char)isUprightRectangle;
-(char)hasSamePathAs:(id)arg1 ;
-(char)isStrokeFor:(id)arg1 ;
-(CGPDFObject*)fillObject;
-(CGAffineTransform)paintTransform;
-(CGPDFObject*)strokeObject;
-(char)canCombineWith:(id)arg1 ;
-(void)setFillObject:(CGPDFObject*)arg1 ;
-(void)setStrokeObject:(CGPDFObject*)arg1 ;
-(void)setPaintTransform:(CGAffineTransform)arg1 ;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)arg1 ;
-(CGRect)innerBounds;
-(void)makeLineFromVertex:(CGPoint)arg1 toVertex:(CGPoint)arg2 ;
-(char)hasFill;
-(char)hasStroke;
-(int)windingRule;
-(void)setWindingRule:(int)arg1 ;
-(void)finalize;
-(int)lineJoin;
@end

