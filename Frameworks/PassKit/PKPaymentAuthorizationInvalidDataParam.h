/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentAuthorizationParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : PKPaymentAuthorizationParam {

	char _animated;
	int _dataType;
	int _status;
	NSError* _error;

}

@property (assign,nonatomic) int dataType;                 //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) int status;                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char animated;                //@synthesize animated=_animated - In the implementation block
-(NSError *)error;
-(char)animated;
-(void)setAnimated:(char)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setDataType:(int)arg1 ;
-(int)dataType;
-(void)setError:(NSError *)arg1 ;
@end

