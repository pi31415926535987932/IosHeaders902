/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, NSMutableDictionary, NSData, NSDictionary;

@interface MBURLRequest : NSObject {

	NSString* _method;
	NSURL* _URL;
	NSMutableDictionary* _headers;
	NSData* _data;
	char _MMePreAuth;
	char _log;

}

@property (nonatomic,retain) NSString * method;                                 //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,retain) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (assign,getter=useMMePreAuth,nonatomic) char MMePreAuth;              //@synthesize MMePreAuth=_MMePreAuth - In the implementation block
@property (assign,getter=shouldLog,nonatomic) char log;                         //@synthesize log=_log - In the implementation block
+(id)requestWithMethod:(id)arg1 URL:(id)arg2 ;
+(id)request;
+(id)requestWithURL:(id)arg1 ;
-(void)setValue:(id)arg1 forHeader:(id)arg2 ;
-(void)setMMePreAuth:(char)arg1 ;
-(id)NSURLRequest;
-(char)useMMePreAuth;
-(NSDictionary *)headers;
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)method;
-(char)shouldLog;
-(void)setMethod:(NSString *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setLog:(char)arg1 ;
@end

