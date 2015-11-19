/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFBase64Encoder : MFBaseFilterDataConsumer {

	const char* _table;
	unsigned long _left;
	unsigned char _leftovers[3];
	unsigned long _line;
	unsigned long _lineBreak;
	char _padChar;

}

@property (assign,nonatomic) unsigned long lineBreak;              //@synthesize lineBreak=_lineBreak - In the implementation block
@property (assign,nonatomic) char allowSlash; 
@property (assign,nonatomic) char padChar;                         //@synthesize padChar=_padChar - In the implementation block
-(void)done;
-(int)appendData:(id)arg1 ;
-(void)setLineBreak:(unsigned long)arg1 ;
-(char)allowSlash;
-(unsigned long)lineBreak;
-(char)padChar;
-(id)initWithConsumers:(id)arg1 ;
-(void)setStandardLineBreak;
-(void)setAllowSlash:(char)arg1 ;
-(void)setPadChar:(char)arg1 ;
@end

