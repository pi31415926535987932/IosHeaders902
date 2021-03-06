/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface RMListItem : NSObject {

	CGPDFNode* _paragraphs;
	unsigned _count;
	unsigned _pos;

}

@property (readonly) CGPDFNode* paragraphNodes;              //@synthesize paragraphs=_paragraphs - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(id)initWithCount:(unsigned)arg1 ;
-(CGRect)bounds;
-(void)dealloc;
-(CGPDFPageRef)page;
-(void)addParagraph:(CGPDFNodeRef)arg1 ;
-(CGPDFNode*)paragraphNodes;
@end

