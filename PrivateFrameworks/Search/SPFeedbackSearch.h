/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@class NSNumber;

@interface SPFeedbackSearch : SPFeedback {

	NSNumber* _queryId;

}

@property (nonatomic,retain) NSNumber * queryId;              //@synthesize queryId=_queryId - In the implementation block
+(id)feedbackForQueryId:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setQueryId:(NSNumber *)arg1 ;
-(NSNumber *)queryId;
-(id)parsecFeedbackFromSession:(id)arg1 ;
@end

