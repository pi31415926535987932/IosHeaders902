/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {

	NSData* _inContentAsData;

}

@property (retain,readonly) NSData * inContentAsData;                 //@synthesize inContentAsData=_inContentAsData - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
-(void)dealloc;
-(NSString *)name;
-(void)reset;
-(id)initWithContent:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(NSData *)inContentAsData;
-(id)initWithContentAsData:(id)arg1 ;
-(id)inContent;
@end

