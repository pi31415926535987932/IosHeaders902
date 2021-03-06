/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKPassField : NSObject <NSSecureCoding> {

	NSString* _value;
	int _type;
	NSString* _key;
	NSString* _label;
	id _unformattedValue;
	NSString* _changeMessage;
	int _textAlignment;
	unsigned _dataDetectorTypes;

}

@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (readonly) NSString * value; 
@property (nonatomic,copy) id unformattedValue;                       //@synthesize unformattedValue=_unformattedValue - In the implementation block
@property (nonatomic,copy) NSString * changeMessage;                  //@synthesize changeMessage=_changeMessage - In the implementation block
@property (assign,nonatomic) int textAlignment;                       //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned dataDetectorTypes;              //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(void)setTextAlignment:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)value;
-(int)textAlignment;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(unsigned)dataDetectorTypes;
-(void)setKey:(NSString *)arg1 ;
-(void)setChangeMessage:(NSString *)arg1 ;
-(id)unformattedValue;
-(NSString *)changeMessage;
-(void)setUnformattedValue:(id)arg1 ;
-(void)flushCachedValue;
@end

