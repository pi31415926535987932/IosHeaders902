/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAMailboxFetchSearchResultConsumer.h>
#import <libobjc.A.dylib/DAMailboxStreamingContentConsumer.h>

@protocol MFDAStreamingContentConsumer;
@class MFConditionLock, MFError;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {

	MFConditionLock* _doneCondition;
	id<MFDAStreamingContentConsumer> _streamConsumer;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<MFDAStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
-(MFError *)error;
-(void)dealloc;
-(id)init;
-(void)waitUntilDone;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(char)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setStreamConsumer:(id<MFDAStreamingContentConsumer>)arg1 ;
-(id<MFDAStreamingContentConsumer>)streamConsumer;
-(char)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(void)searchResultFetchedWithResponses:(id)arg1 ;
-(void)setError:(MFError *)arg1 ;
@end

