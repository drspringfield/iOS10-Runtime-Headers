/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIEventsAndContactsTableViewController : UITableViewController <CNContactViewControllerDelegate, EKEventEditViewDelegate, SGUIAddAllTableViewCellDelegate, SGUIContactSuggestionTableViewCellDelegate, SGUIEventSuggestionTableViewCellDelegate> {
    NSArray * _realtimeContacts;
    NSArray * _realtimeEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAllTableViewCellDidTapAddAll:(id)arg1;
- (void)contactSuggestionCell:(id)arg1 didTapAddForContactSuggestion:(id)arg2;
- (void)contactSuggestionCell:(id)arg1 didTapIgnoreForContactSuggestion:(id)arg2;
- (void)contactSuggestionCell:(id)arg1 didTapUpdateForContactSuggestion:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventSuggestionCell:(id)arg1 didTapAddForEventSuggestion:(id)arg2;
- (void)eventSuggestionCell:(id)arg1 didTapIgnoreForEventSuggestion:(id)arg2;
- (void)eventSuggestionCell:(id)arg1 didTapUpdateForEventSuggestion:(id)arg2;
- (id)initWithRealtimeEvents:(id)arg1 realtimeContacts:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end