/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/CNMultiValueUpdate.h>

@class CNLabeledValue;

@interface CNMultiValueSingleUpdate : CNMultiValueUpdate {

	CNLabeledValue* _value;

}

@property (nonatomic,readonly) CNLabeledValue * value;              //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(id)description;
-(CNLabeledValue *)value;
-(id)initWithValue:(id)arg1 ;
@end

