/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsAutocomplete/CNAutocompleteQueryResponsePreparer.h>

@class CNAutocompleteQueryResponsePreparer;

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer {

	CNAutocompleteQueryResponsePreparer* _preparer;

}

@property (readonly) CNAutocompleteQueryResponsePreparer * preparer;              //@synthesize preparer=_preparer - In the implementation block
-(id)prepareResults:(id)arg1 ;
-(void)setPriorityResultsFuture:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 ;
-(CNAutocompleteQueryResponsePreparer *)preparer;
@end

