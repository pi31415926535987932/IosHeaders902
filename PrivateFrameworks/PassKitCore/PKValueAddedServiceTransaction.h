/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKValueAddedMerchant, NSString, NSNumber, NSDate;

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	char _didSucceed;
	PKValueAddedMerchant* _merchant;
	NSString* _identifier;
	NSString* _merchantURL;
	NSNumber* _terminalApplicationVersion;
	int _terminalMode;
	NSDate* _transactionDate;
	int _error;

}

@property (nonatomic,retain) PKValueAddedMerchant * merchant;                    //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * merchantURL;                             //@synthesize merchantURL=_merchantURL - In the implementation block
@property (nonatomic,retain) NSNumber * terminalApplicationVersion;              //@synthesize terminalApplicationVersion=_terminalApplicationVersion - In the implementation block
@property (assign,nonatomic) int terminalMode;                                   //@synthesize terminalMode=_terminalMode - In the implementation block
@property (assign,nonatomic) char didSucceed;                                    //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                           //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) int error;                                          //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(NSDate *)transactionDate;
-(PKValueAddedMerchant *)merchant;
-(void)setMerchant:(PKValueAddedMerchant *)arg1 ;
-(char)didSucceed;
-(int)error;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setError:(int)arg1 ;
-(int)terminalMode;
-(void)setTerminalApplicationVersion:(NSNumber *)arg1 ;
-(void)setTerminalMode:(int)arg1 ;
-(void)setDidSucceed:(char)arg1 ;
-(NSNumber *)terminalApplicationVersion;
-(void)setMerchantURL:(NSString *)arg1 ;
-(NSString *)merchantURL;
@end

